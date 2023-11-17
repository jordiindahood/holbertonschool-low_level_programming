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
		if (separator == NULL)
			printf("%d", va_arg(p, int));
		else
			print_numbers("%d %c",va_arg(p, int),*separator);

	va_end(p);
	printf("\n");
}
