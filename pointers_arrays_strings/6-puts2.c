#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - check the code
 * Description: print every other character
 * @s: pointer to the string to be executed
 * Return: void
 */
void puts2(char *s)
{
	int i, n;

	n = strlen(s);
	for (i = 0; i < n; i++)
	{
		if (i %2 == 0)
			_putchar(*(s+i));
	}
}
