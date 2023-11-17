#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - print all the arguments
 * @separator: const char *
 * @n : const unsigned int
 * Return: int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(p);
	printf("\n");
}
