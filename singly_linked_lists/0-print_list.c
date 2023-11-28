#include "lists.h"
/**
 * print_list - print all the elements of a list
 * @h: const list_t *
 * Return: size_t number of elements.
 */
size_t print_list(const list_t *h)
{
	list_t *p;
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
