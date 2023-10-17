#include <stdio.h>
/*more headers goes there*/

/**
 *main - print a sentence
 *Void
 *Description: print alphabet in lowercase in reverse
 * Return: zero
 */
int main(void)
{
char ch = 'z';
char newline = '\n';
for (ch = 'z';   ch >= 'a';  ch--)
{
putchar(ch);
}
putchar(newline);
return (0);
}
