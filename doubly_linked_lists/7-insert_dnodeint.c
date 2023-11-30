#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a data at a specific node
 * @head: dlistint_t **
 * @idx: unsigned int
 * @n: int
 * Return: dlistint_t
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *p, *q;
	unsigned int i;

	node = malloc(sizeof(dlistint_t));
	if (node)
		return (NULL);
	node->n = n;

	if (*h == NULL)
	{
		*h = node;
		return (*h);
	}

	p = *h;
	q = *h;
	i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (idx == (unsigned int)dlistint_len(*h))
		return (add_dnodeint_end(h, n));

	while (p != NULL)
	{
		if (i == idx)
			break;
		p = p->next;
		i++;
	}

	if (p->next == NULL)
		return (NULL);

	q = p->next;

	p->next = node;
	node->next = q;
	q->prev = node;
	node->prev = p;

	return (*h);
}
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
