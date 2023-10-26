#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - check the code
 * Description: reverse a string
 * @s: pointer to the string to be executed
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;

	int str[1000];

	i = 0;
	if (n != 0)
	{
		do {
			str[i] = *(a + n - i - 1);
			i++;
		} while (i <= n);
		i = 0;
		do {
			*(a + i) = str[i];
			i++;
		} while (i < n);
	}
}
