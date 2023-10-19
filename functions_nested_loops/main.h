#include <stdio.h>
/*more headers goes there*/

/**
 *main - print a sentence
 *Void
 *Description: print alphabet in lowercase
 * Return: zero
 */
int print_alphabet(void)
{
char ch = 'a';
char newline = '\n';
for (ch = 'a';   ch <= 'z';  ch++)
{
putchar(ch);
}
putchar(newline);
return (0);
}
