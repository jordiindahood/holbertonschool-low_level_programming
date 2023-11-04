#include "main.h"
/**
 * main - check the code
 *@argc : int , number of args including name of the program
 *@argv : array of strings ;
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int res = 0;
	unsigned int j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; j < strlen(argv[i]); j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			res = res + numberize(*(argv + i));
		}
	}
	printf("%d\n", res);
	return (res);
}
/**
 * numberize - turn string of numbers to an actual number
 *@s : array of strings ;
 * Return: int
 */
int numberize(char *s)
{
	int res = 0;

	while (*s)
	{
		res = res * 10 + (*s - '0');
		s++;
	}
	return (res);
}
