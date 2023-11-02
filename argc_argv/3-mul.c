#include "main.h"
/**
 * main - check the code
 *@argc : int , number of args including name of the program
 *@argv : array of strings ;
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%d\n", *(argv + argc) * *(argv + argc - 1));
	else
		printf("Error\n");
	return (0);
}
