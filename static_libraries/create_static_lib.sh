#!/bin/bash
SRC = ~.c
OBJ = ${SRC:.c=.o}
gcc -c ${SRC} -o
ar -rcs liball.a ${OBJ}