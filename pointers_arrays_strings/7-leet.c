#include "main.h"
/**
 * leet - check the code
 * Description: encode to 1337
 * @s: pointer to the string to be executed
 * Return: void
 */
char *leet(char *s)
{
	int j, i, l = 0;
	char T[5] = {'A', 'E', 'O', 'T', 'L'};
	char V[5] = {'4', '3', '0', '7', '1'};

	l = strlen(s);
	for (i = 0; i < l; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == T[j] || s[i] == T[j] + 32)
				s[i] = V[j];
		}
	}
	return (s);
}
