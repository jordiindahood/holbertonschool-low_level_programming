#include <stdio.h>
/*more headers goes there*/

/**
 *main - print a sentence
 *Void
 *Description: print alphabet in lowercase except 'q' and 'e'
 * Return: zero
 */
int main(void)
{
char ch = 'a';
char newline = '\n';
for (ch = 'a';   ch <= 'z';  ch++)
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
}
putchar(newline);
return (0);
}
