#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"
/*more headers goes there*/

/**
 *main - print a sentence
 *Void
 *Description: print "_putchar"
 * Return: zero
 */
int main(void)
{
char ch[] = "_putchar";
int i = 0;
for (i = 0 ; i < strlen(ch); i++)
{
if (ch[i] != '\0')
putchar(ch[i]);
else
break;
}
return (0);
}
