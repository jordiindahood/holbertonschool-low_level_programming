#include "main.h"
/**
 * _puts__rev_recursion - check the code
 * Description: print a string backwards
 * @s : pointer to string
 * Return: Void
 */
void _puts_rev_recursion(char *s)
{
	if (*s)
	{
		int n = strlen(s);
		_putchar(*(s + n));
		s++;
		_puts_recursion(s);
	}
}
