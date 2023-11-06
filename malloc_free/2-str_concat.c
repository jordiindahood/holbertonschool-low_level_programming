#include "main.h"
/**
 * _strdup - make a copy of a string @str
 *@str: char
 * Return: ptr.
 */
char *str_concat(char *s1, char *s2)
{
    unsigned int size1, size2, i = 0;
    char *p;

    if (s1 == NULL && s2 == NULL)
        return (NULL);
    if (s1 != NULL)
        size1 = strlen(s1);
    if (s2 != NULL)
        size2 = strlen(s2);
    while (i < size1 + size2 + 1)
    {
        if (i < size1)
            p[i] = s1[i];
        else
            p[i] = s2[i];
    }
    return(p);
}
