#include "main.h"
/**
 * cap_string - check the code
 * Description: capitalize all words
 * @s: pointer to the string to be executed
 * Return: void
 */
char *cap_string(char *s)
{
	int i = 0;
	int cap;
	if (*s != '\0')
	{
		while (*(s + i) != '\0')
		{
			if (cap == 0 && *(s + i) == ' ')
				cap = 1;
			if (*(s + i) <= 'z' && *(s + i) >= 'a' && cap == 1)
			{
				*(s + i) -= 32;
				cap--;
			}
			i++;
		}
	}
	return (s);
}
