This PoC exploit code is designed to run on Linux, tested on Debian-derived distros.  
The chief dependency is the `gcc-mingw-w64-x86-64` package (or `gcc-mingw-w64-i686` for 32bit DLLs).

Simply running `./make.sh` will create a `build/cryptbase.dll` file that executes a payload upon initial loading
of the DLL (via a DllMain implementation).  The hard-coded payload is:

```
system("powershell -command echo Payload ran as $(whoami) > C:\\pwned.txt")
```

To change the payload, edit the `dll-source.c` file.  To build a 32bit version, 
edit the `make.sh` script and change the compiler.

If you need a DLL with a different name, you can run `./make.sh OtherName` to get `build/OtherName.dll`,
or simply rename a previously generated DLL.

For more information, see:

* https://deepsurface.com/windows-service-permissions-and-dll-sideloading/

* https://deepsurface.com/deepsurface-security-advisory-local-privilege-escalation-in-octopus-deploy-on-windows-cve-2021-26556/

* http://stackoverflow.com/questions/6431345/how-to-specify-dll-onload-function-for-mingw32
