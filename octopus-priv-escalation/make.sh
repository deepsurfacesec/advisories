#!/bin/sh

set -e

#GCC=i686-w64-mingw32-gcc # For 32bit; install gcc-mingw-w64-i686 in debian/ubuntu
GCC=x86_64-w64-mingw32-gcc # For 64bit; install gcc-mingw-w64-x86-64 in debian/ubuntu

BASENAME="cryptbase";
if [ "x$1" != "x" ]; then
    BASENAME=$1
fi

cp dll-source.c build/${BASENAME}.c;
( cd build && $GCC -c ${BASENAME}.c );
( cd build && $GCC -shared -o ${BASENAME}.dll ${BASENAME}.o -Wl,--out-implib,lib${BASENAME}.a );
