#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts_half - check the code
 * Description: print half the string
 * @str: pointer to the string to be executed
 * Return: void
 */
void puts_half(char *str)
{
	int i, n, m;

	n = strlen(str);
	if (n % 2 == 0)
		m = (n / 2) - 1;
	else
		m = ((n - 1) / 2);
	for (i = m + 1; i < n; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
