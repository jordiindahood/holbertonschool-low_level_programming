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
	int a = argv[1];
	int b = argv[2];
	int res = a*b;
		printf("%d\n", res);
	else
		printf("Error\n");
	return (0);
}
