#include "main.h"
#include <stdio.h>
/**
 * _islower - check the code
 * Description: check for lowercase character
 * Return: 1 if c is lowercase, 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
