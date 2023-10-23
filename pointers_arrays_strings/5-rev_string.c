#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - check the code
 * Description: reverse a string
 * @s: pointer to the string to be executed
 * Return: void
 */
void rev_string(char *s)
{
	int i, n;
	char str[100];

	n = strlen(s);
	i = 0;
	if (str[0] != '\0')
	{
		do
		{
			str[i] = *(s + n - i - 1);
			i++;
		} while (*(s + i) != '\0');
		i=0;
		do
		{
			*(s+i) = str[i];
			i++;
		} while (str[i] != '\0');
	}
}
