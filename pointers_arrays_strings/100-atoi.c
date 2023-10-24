#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _atoi - check the code
 * Description: convert a string to integer
 * @s : pointer to string
 * Return: vaule converted from string
 */
int _atoi(char *s)
{
	int i, len = 0;
	int res;

	len = strlen(s);
	while (i < len)
	{
		if (*(s + i) >= 48 && *(s + i) <= 57)
		{
			if (*(s + i - 1) == '-')
				res = res * 10 + itoa(*(s + i)) * -1;
			else
				res = res * 10 + itoa(*(s + i));
		}
	}
	return (res);
}
