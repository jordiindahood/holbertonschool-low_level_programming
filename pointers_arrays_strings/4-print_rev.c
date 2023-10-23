#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - check the code
 * Description: print a string in reverse
 * @a : pointer to the string to be executed
 * Return: void
 */
void print_rev(char *s)
{
	int i, n;

	n = strlen(s);
	for (i = 0; i <= n; i++)
		_putchar(*(s + n - i));
}
