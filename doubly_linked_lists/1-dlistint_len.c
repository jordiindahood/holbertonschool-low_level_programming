#include "lists.h"
/**
 * dlistint_len - return the number of elements in a the list
 * @h: const dlistint_t *
 * Return: size_t number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *p;
	size_t i = 0;

	if (h)
	{
		p = (dlistint_t *)h;
		while (p)
		{
			p = p->next;
			i++;
		}
	}
	return (i);
}
