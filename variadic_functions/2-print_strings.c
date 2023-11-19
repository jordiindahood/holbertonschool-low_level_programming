#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - print all the arguments
 * @separator: const char *
 * @n : const unsigned int
 * Return: int
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list p;

	va_start(p, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", stringnil(va_arg(p, char *)));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(p);
	printf("\n");
}
/**
 * string - return a string
 * @s: char*
 * Return: char*
 */
char *stringnil(char *s)
{
	char *no = "(nil)";
	if (s == NULL)
		return (no);
	return (s);
}