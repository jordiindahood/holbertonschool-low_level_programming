#include "main.h"
#include <stdio.h>
/**
 * _isupper - check the code
 * Description: check if @c is an UPPERCASE letter
 * @c: char
 * Return: 1 if c is an uppercase letter, 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
