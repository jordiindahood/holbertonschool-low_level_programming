#include <stdio.h>
/*more headers goes there*/

/**
 *main - print a sentence
 *Void
 *Description: print alphabet in lowercase
 * Return: zero
 */
int main(void)
{
char n;
char ch;
char newline = '\n';
for (n = '0';   n <= '9';  n++)
{
putchar(n);
}
for (ch = 'a';  ch <= 'f'; ch++)
{
putchar(ch);
}
putchar(newline);
return (0);
}
