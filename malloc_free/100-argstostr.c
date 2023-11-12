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
	size_t len = 0;
	char *_all_args,*p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
	}

	p=_all_args = (char *)malloc(len + ac - 1);

	for (i = 0; i < ac; i++)
	{
		memcpy(_all_args, av[i], strlen(av[i]));
		_all_args += strlen(av[i]) + 1;
		*(_all_args - 1) = '\n';
	}
	return (p);
}
