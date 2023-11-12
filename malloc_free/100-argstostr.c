#include "main.h"
#include <string.h>
/**
 * argstostr - concat all the args to the program
 *@ac:int
 *@av:**char
 * Return: ptr.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len = 0;
	char *p;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 1; i < ac; i++)
		len = +strlen(av[i]) + 1;
	p = malloc(len);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
			strcpy(p[k], av[i][j]);
			k++;
		}
		strcpy(p[k], "\n");
		k++;
	}
	return (p);
}
