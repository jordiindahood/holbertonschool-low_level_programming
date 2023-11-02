#include "main.h"
/**
 * main - check the code
 *@argc : int , number of args including name of the program
 *@argv : array of strings ;
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, res = 0;
	if (argc == 1)
		printf("%d", i);
	else
		for (i = 1; i < argc; i++)
		{
			res=res+atoi(argv[i]);
		}
	return (0);
}
