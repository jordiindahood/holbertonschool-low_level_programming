#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * Description: print from 1 to 100 and each multiple by 3 replaced by "Fizz"
 * multiple by 5 replaced by "Buzz" and for
 * each multiple by both, replaced by "FizzBuzz"
 * Return: void
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
