#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c $(ls *.c | grep -v main.c)
ar rcs liball.a *.o
