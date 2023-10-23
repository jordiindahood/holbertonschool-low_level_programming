#include "main.h"
#include <stdio.h>
/**
 * print_rev - check the code
 * Description: print a string in reverse
 * @a : pointer to the string to be executed
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	for (i=_strlen(s)-1; i==0;i--)
		_putchar(s+i);
}
