#!/bin/bash
gcc -fPIC -o *.c
gcc -shared *.o -o liball.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH