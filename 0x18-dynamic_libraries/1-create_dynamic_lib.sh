#!/bin/bash
gcc -c -Wall -Werror -pendantic -fpic *.c
gcc -shared -o liball.so *.o
