#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int print_alphabet(void)
{
    char ch = 'a';
char newline = '\n';
for (ch = 'a';   ch <= 'z';  ch++)
{
_putchar(ch);
}
_putchar(newline);
return (0);
}
