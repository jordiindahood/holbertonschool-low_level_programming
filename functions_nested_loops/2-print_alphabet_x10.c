#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - check the code
 * Description: print alphabet function
 * Return: void.
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char ch = 'a';
		char newline = '\n';

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar(newline);
	}
}
