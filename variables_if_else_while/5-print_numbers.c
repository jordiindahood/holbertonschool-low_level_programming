#include <stdio.h>
/*more headers goes there*/

/**
 *main - print numbers
 *Void
 *Description: print numbers form 0 to 9
 * Return: zero
 */
int main(void)
{
int n = 0;
char newline = '\n';
for (n = 0;   n < 10;    n++)
{
printf("%d", n);
}
putchar(newline);
return (0);
}
