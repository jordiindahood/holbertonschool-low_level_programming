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
	int i;
	char *p;
	if (ac == 0 || av == NULL)
		return (NULL);

	p = malloc(sizeof(char **) * (ac - 1)*2);

	for (i == 1; i < ac; i++)
	{
		if (i == 1)
		{
			strcpy(p[1], av[1]);
			strcat(p[2], "\n");
		}
		else
		{
			strcat(p[i*2-1], av[i]);
			strcat(p[i*2],"\n");
		}
	}
	return(p);
}
