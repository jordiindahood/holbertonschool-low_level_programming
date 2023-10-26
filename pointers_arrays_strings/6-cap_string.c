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
	int cap = 0;

	if (*s != '\0')
	{
		if (*(s + i) <= 'z' && *(s + i) >= 'a')
			*(s + i) -= 32;
		while (*(s + i) != '\0')
		{
			if (cap == 0 && (*(s + i) == ' ' || *(s + i) == '\n' || *(s + i) == '\t'))
				if (*(s + i + 1) <= 'z' && *(s + i + 1) >= 'a')
					cap++;
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
