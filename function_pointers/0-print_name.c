#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"
/**
 * print_name - print a name
 * @name: char*
 * @f: pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
		(*f)(name);
}
