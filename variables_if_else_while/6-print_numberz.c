#include <stdio.h>
/*more headers goes there*/

/**
 *main - print a sentence
 *Void
 *Description: print numbers form 0 to 9
 * Return: zero
 */
int main(void)
{
char ch = '0';
char newline = '\n';
for (ch = '0';   ch <= '9';  ch++)
{
putchar(ch);
}
putchar(newline);
return (0);
}
