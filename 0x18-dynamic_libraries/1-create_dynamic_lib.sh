#!/bin/bash
gcc -o -fPIC liball.so *.c
gcc -shared -o liball.so *.o
