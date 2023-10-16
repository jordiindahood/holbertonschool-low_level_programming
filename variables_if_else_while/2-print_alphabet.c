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
char ch= 'a';
for (ch = 'a'; ch <= 'z'; ch++)
{
    putchar(ch);
}
return (0);
}
