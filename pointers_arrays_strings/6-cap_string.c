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
	int cap = 0 ;

		if (*s != '\0')
	{
		while (*(s + i) != '\0' && *(s+i) == ' ')
		{
			if (*(s + i) <= 'z' && *(s + i) >= 'a')
				*(s + i) -= 32;
			i++;
		}
	}
	return (s);
}
