#ifndef VARIADIC
#define VARIADIC

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct printf - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct prints
{
	char op;
	void (*f)(va_list);
} print;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
char *stringnil(char *s);
void print_all(const char * const format, ...);

void op_char(va_list s);
void op_int(va_list s);
void op_float(va_list s);
void op_string(va_list s);

#endif
