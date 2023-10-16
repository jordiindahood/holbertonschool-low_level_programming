#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*more headers goes there*/

/**
 *main - print a sentence
 *Void
 *Description: a main function
 * that prints if a number "n" is positive, negative,
 * or equal eo zero.
 * Return: zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n < 0)
printf("%d is negative\n", n);
    else if (n > 0)
printf("%d is positive\n", n);
    else
printf("%d is zero\n", n);
return (0);
}