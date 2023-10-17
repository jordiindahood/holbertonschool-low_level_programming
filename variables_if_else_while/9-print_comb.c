#include <stdio.h>
#include <string.h>
/*more headers goes there*/

/**
 *main - print
 *Void
 *Description: print all possible combinations of
 *single-digit numbers.
 * Return: zero
 */
int main(void)
{
int ch = 48;
for (ch = 48;   ch <= 57;  ch++)
{
putchar(ch);
if (ch >47 && ch <57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
