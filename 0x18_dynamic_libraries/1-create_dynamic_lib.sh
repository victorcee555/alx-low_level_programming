#!/bin/bash
gcc -c -fPIC *.c && gcc -shared -Wall -o liball.so *.c
