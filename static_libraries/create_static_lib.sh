SRC = ~.c
OBJ = ${SRC:.c=.o}
gcc -c ${SRC} -o
ar -rcs libmylib.a ${OBJ}