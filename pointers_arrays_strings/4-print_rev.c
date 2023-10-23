#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - check the code
 * Description: print a string in reverse
 * @s: pointer to the string to be executed
 * Return: void
 */
void print_rev(char *s)
{
	int i, n;

	n = strlen(s);
	if (*s == '\0')
		_putchar('\n');
	else
	{
		i = 0;
		do
		{
			_putchar(*(s + n - i - 1));
			i++;
		} while (*(s + i) != '\0');
		_putchar('\n');
	}
}
