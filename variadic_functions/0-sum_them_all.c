#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum all the arguments
 * @n : const unsigned int
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, res = 0;
	va_list p;

	va_start(p, n);
	for (i = 0; i < n; i++)
		res += va_arg(p, n);
	return (res);
}
