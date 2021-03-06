#!/bin/sh

# Allow to regenerate the build file

if [ -d "build/" ]; then
    rm -r build
fi
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_CXX_FLAGS="-std=c++11 -pg -I/usr/include/python2.7 -lpython2.7" ..
make
