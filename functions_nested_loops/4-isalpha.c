#include "main.h"
#include <stdio.h>
/**
 * _isalpha - check the code
 * Description: check if @c is an alphabetic letter
 * Return: 1 if c is a letter, 0 if not
 */
int _islower(int c)
{
	if ((c >= 97 && c <= 122)||(c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
