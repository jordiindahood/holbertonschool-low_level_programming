#include "main.h"
/**
 * main - check the code
 *@argc : int , number of args including name of the program
 *@argv : array of strings ;
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc && *argv[i] != 0)
	{
		i++;
		printf("%s\n", *(argv + i - 1));
	}
	return (0);
}
