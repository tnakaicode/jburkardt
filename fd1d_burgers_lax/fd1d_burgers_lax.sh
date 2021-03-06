#!/bin/bash
#
g++ -c fd1d_burgers_lax.cpp
if [ $? -ne 0 ]; then
  echo "Errors while compiling fd1d_burgers_lax.cpp"
  exit
fi
#
g++ fd1d_burgers_lax.o
if [ $? -ne 0 ]; then
  echo "Errors while loading fd1d_burgers_lax.o"
  exit
fi
rm fd1d_burgers_lax.o
#
mv a.out ~/bincpp/$ARCH/fd1d_burgers_lax
#
echo "Program installed as ~/bincpp/$ARCH/fd1d_burgers_lax"
