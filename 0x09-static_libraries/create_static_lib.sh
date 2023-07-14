#!/bin/bash
gcc -Wall -pednatic -Werror -Wextra -c *.c
ar -ar liball.a *.c
ranlib liball.a
