#include "lists.h"
/**
 * list_len - return the number of elements in a the list
 * @h: const list_t *
 * Return: size_t number of elements.
 */
size_t list_len(const list_t *h)
{
    list_t *p;
    size_t i = 0;

    if (h)
    {
        p = (list_t *)h;
        while (p)
            i++;
    }
    return (i);
}
