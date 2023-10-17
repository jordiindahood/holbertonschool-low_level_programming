#include <stdio.h>
/*more headers goes there*/

/**
 *main - print a sentence
 *Void
 *Description: print alphabet in lowercase, then uppercase
 *and followed by a newline
 * Return: zero
 */
int main(void)
{
char ch = 'a';
char CH = 'A';
char newline = '\n';
for (ch = 'a';   ch <= 'z';  ch++)
{
putchar(ch);
}
for (CH = 'A';   CH <= 'Z';  CH++)
{
putchar(CH);
}
putchar(newline);
return (0);
}
