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
	int i, j, len = 0;
	char *p;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 1; i < ac; i++)
		len = +strlen(av[i]) + 1;
	p = malloc(len);
	if (p == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
		if (j == 1)
			strcpy(p, av[j]);
		else
		{
			strcat(p[strlen(av[j - 1])], av[j]);
			strcat(p[strlen(av[j])], "\n");
		}
	return (p);
}
