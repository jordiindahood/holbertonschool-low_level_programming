#include "main.h"
/**
 * string_toupper - check the code
 * Description: change all lower cases to uppercase
 * @s: pointer to the string to be executed
 * Return: void
 */
char *string_toupper(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		while (*(s + i) != '\0')
		{
			if (*(s + i) <= 'z' && *(s + i) >= 'a')
				*(s + i) -= 32;
			i++;
		}
	}
	return (s);
}
