#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - check the code
 * Description: print half the string
 * @str: pointer to the string to be executed
 * Return: void
 */
void puts_half(char *s)
{
	int i, n, m;

	n = strlen(s);
	if (n % 2 == 0)
		m = n * 2;
	else
		m = (n - 1) / 2;
	for (i = m; i < n; i++)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
