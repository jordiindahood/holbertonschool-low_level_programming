#include "main.h"
/**
 * string_toupper - check the code
 * Description: change all lower cases to uppercase
 * @s: pointer to the string to be executed
 * Return: void
 */
void *string_toupper(char *s)
{
	while (*s)
	{
		if (*s <= 'z' && *s >= 'a')
			*s -= 32;
		s++;
	}
}
