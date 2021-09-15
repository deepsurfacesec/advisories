This directory contains sample exploit build code for CVE-2021-35982, a DLL sideloading privilege escalation flaw
in Adobe Reader.

These scripts are designed to run on a modern Linux system.  They cross-compile a DLL using the i686-w64-mingw32-gcc binary,
which can be installed through the gcc-mingw-w64-i686 package on Debian/Ubuntu based systems.

`./gen.sh` will generate an exploit DLL in the `build/` directory.

For convenience, we've attached a pre-generated DLL which will execute the payload: 

```
powershell -command echo DLL sideloading successful as $(whoami) > C:\pwned
```

For more information on this vulnerability, see:
  https://deepsurface.com/advisory-lpe-adobe-reader-cve-2021-35982
