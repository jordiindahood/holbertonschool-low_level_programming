#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - print all the arguments
 * @separator: const char *const
 * Return: none
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
/**
 * op_char - print a character
 * @s: va_list
 * Return: void
 */
void op_char(va_list s)
{
	printf("%c", va_arg(s, int));
}
/**
 * op_int - print a integer
 * @s: va_list
 * Return: void
 */
void op_int(va_list s)
{
	printf("%d", va_arg(s, int));
}
/**
 * op_float - print a float
 * @s: va_list
 * Return: void
 */
void op_float(va_list s)
{
	printf("%f", va_arg(s, double));
}
/**
 * op_string - print a string
 * @s: va_list
 * Return: void
 */
void op_string(va_list s)
{
	char *str;

	str = va_arg(s, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
