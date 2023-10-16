#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*more headers goes there*/

/**
 *main - print a sentence
 *Void
 *Description: a main function
 * that prints if the last digit of number "n":
 * -is greater than 5
 * -equal 0
 * less than 6 and not 0
 * or equal to zero.
 * Return: zero
 */
int main(void)
{
	int a, n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
a = n % 10;
if (a > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, a);
else if (a == 0)
printf("Last digit of %d is %d and is 0\n", n, a);
else
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
return (0);
}
