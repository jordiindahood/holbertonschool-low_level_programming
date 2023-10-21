#include "main.h"
#include <stdio.h>
/**
 * print_numbers - check the code
 * Description: print from 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar('0' + i);
	_putchar('\n');
}
