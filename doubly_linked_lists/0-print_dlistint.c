#include "lists.h"
/**
 * print_dlistint - print all elements of a double linked list
 * @h: const dlistint_t *
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *p;
	size_t i = 0;

	if (h)
	{
		p = (list_t *)h;
		while (p)
		{
			if (!p->str)
				printf("[%d] (nil)\n", p->len);
			else
				printf("[%d] %s\n", p->len, p->str);
			p = p->next;
			i++;
		}
	}
	return (i);
}