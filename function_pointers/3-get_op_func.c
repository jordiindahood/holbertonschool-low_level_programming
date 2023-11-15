#include "3-calc.h"

/**
 * get_op_func - execute a specific operation
 * @s: struct dog *
 * @a: int
 * @b: int
 * Return: int
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i;

	i = 0;
	while (i < 6)
	{
		if (strcmp(ops[i].op, s) == 0 && i != 5)
			return (ops[i].f);
		else
			return (NULL);
		i++;
	}
	return (0);
}
