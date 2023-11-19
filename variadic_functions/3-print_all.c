#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - print all the arguments
 * @separator: const char *
 * @n : const unsigned int
 * Return: int
 */
void print_all(const char *const format, ...)
{
	int i, j = 0;
	char *separator1 = "";
	char *separator2 = ", ";
	va_list argm;

	print T[] = {
		{'c', op_char},
		{'i', op_int},
		{'f', op_float},
		{'s', op_string},
		{'\0', NULL},
	};
	va_start(argm, format);
	while (format && format[i])
	{
		j = 0;
		while (T[j].op)
		{
			if (format[i] == T[j].op)
			{
				printf("%s", separator1);
				T[j].f(argm);
				separator1 = separator2;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(argm);
}

void op_char(va_list s)
{
	printf("%c", va_arg(s, int));
}
void op_int(va_list s)
{
	printf("%d", va_arg(s, int));
}
void op_float(va_list s)
{
	printf("%f", va_arg(s, double));
}
void op_string(va_list s)
{
	char *str;

	str = va_arg(s, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}