#include "main.h"
#include <stdio.h>
/**
 * _isdigit - check the code
 * Description: check if @c is a digit
 * @c: char
 * Return: 1 if c is a digit, 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
