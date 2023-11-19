#ifndef VARIADIC
#define VARIADIC

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
char *stringnil(char *s);

#endif
