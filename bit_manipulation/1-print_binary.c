#include "main.h"
/**
 * print_binary - print binary representaion of a given number
 * @b: unsigned long int
 * Return: Void
 */
void print_binary(unsigned long int n)
{
	int size = sizeof(n) * 8, count = 0;

	while (size)
	{
		if (n & 1L << --size)
		{
			putchar('1');
			count++;
		}
		else if (count)
		{
			putchar('0');
		}
	}
	if (!count)
	{
		putchar('0');
	}
}
