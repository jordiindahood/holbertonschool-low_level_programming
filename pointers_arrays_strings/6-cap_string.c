#include "main.h"
/**
 * cap_string - check the code
 * Description: capitalize all words
 * @s: pointer to the string to be executed
 * Return: void
 */
char *cap_string(char *s)
{
	int i, cap, l = 0;

	while (*(s + l))
		l++;
	if (s[0] <= 'z' && s[0] >= 'a')
		s[0] -= 32;
	for (i = 0; i < l; i++)
	{
		if (s[i] == '\t' || s[i] == '\n')
			cap = 1;
		else if (s[i] == ' ' || s[i] == '.')
			cap = 1;
		else if (s[i] == ',' || s[i] == ';')
			cap = 1;
		else if (s[i] == '!' || s[i] == '?')
			cap = 1;
		else if (s[i] == '(' || s[i] == ')')
			cap = 1;
		else if (s[i] == '{' || s[i] == '}')
			cap = 1;
		else if (s[i] <= 'z' && s[i] >= 'a' && cap != 0)
		{
			s[i] -= 32;
			cap = 0;
		}
		else
			cap = 0;
	}
	return (s);
}
