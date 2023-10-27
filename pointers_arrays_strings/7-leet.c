#include "main.h"
/**
 * leet - check the code
 * Description: encode to 1337
 * @s: pointer to the string to be executed
 * Return: void
 */
char *leet(char *s)
{
	int i, cap, l = 0;

	while (*(s + l))
		l++;
	for (i = 0; i < l; i++)
	{
		if (s[i] == 'a' || s[i] == 'A')
			s[i]='4';
		else if (s[i] == 'e' || s[i] == 'E')
			s[i]='3';
		else if (s[i] == 'o' || s[i] == 'O')
			s[i]='0';
		else if (s[i] == 't' || s[i] == 'T')
			s[i]='7';
		else if (s[i] == 'l' || s[i] == 'L')
			s[i]='1';
	}
	return (s);
}
