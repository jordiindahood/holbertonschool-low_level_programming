#include "3-calc.h"

/**
 * get_op_func - execute a specific operation
 * @s: struct dog *
 * @a: int
 * @b: int
 * Return: int
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i = 0;

	while (i < 6)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		else if (i == 5)
		{
			printf("Error\n");
			exit(99);
		}
		i++;
	}
	return (0);
}