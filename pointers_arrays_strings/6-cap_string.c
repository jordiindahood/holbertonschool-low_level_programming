#include "main.h"
/**
 * cap_string - check the code
 * Description: capitalize all words
 * @s: pointer to the string to be executed
 * Return: void
 */
char *cap_string(char *s)
{
	int i = 1;

	if (*s != '\0')
	{
		if (*s <= 'z' && *s >= 'a')
			*s -= 32;
		while (*(s + i) <= 'z' && *(s + i) >= 'a')
		{
			if (*(s + i - 1) == ' ')
				*(s + i) -= 32;
			i++;
		}
	}
	return (s);
}
