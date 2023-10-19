#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - check the code
 * Description: print alphabet function
 * Return: Always 0.
 */
int print_alphabet(void)
{
	char ch = 'a';
	char newline = '\n';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar(newline);
	return (0);
}
