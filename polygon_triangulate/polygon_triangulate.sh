#!/bin/bash
#
cp polygon_triangulate.hpp /$HOME/include
#
g++ -c -I/$HOME/include polygon_triangulate.cpp
if [ $? -ne 0 ]; then
  echo "Errors compiling polygon_triangulate.cpp"
  exit
fi
#
mv polygon_triangulate.o ~/libcpp/$ARCH/polygon_triangulate.o
#
echo "Library installed as ~/libcpp/$ARCH/polygon_triangulate.o"
