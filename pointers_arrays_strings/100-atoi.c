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
	unsigned int res = 0;
	int i;

	for (i = 0; s[i] != '\0'; ++i)
		if (s[i] < 58 && s[i] > 47)
			res = res * 10 + s[i] - '0';
	for (i = 0; s[i] != '\0'; ++i)
		if (s[i] == '-')
			res = res * -1;
	return (res);
}
