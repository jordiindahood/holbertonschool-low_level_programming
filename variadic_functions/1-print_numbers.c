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

    if (separator != NULL)
    {
        va_start(p, n);

        for (i = 0; i < n; i++)
            if (va_arg(p, int))
                printf("%d", va_arg(p, int));

        printf("\n");
        va_end(p);
    }
}
