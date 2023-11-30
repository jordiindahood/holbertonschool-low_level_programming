#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a data at a specific node
 * @h: dlistint_t **
 * @idx: unsigned int
 * @n: int
 * Return: dlistint_t
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *p, *q;
	unsigned int i;

	if (idx > dlistint_len(*h))
		return (NULL);

	if (idx == 0 || *h == NULL)
		return (add_dnodeint(h, n));

	if (idx == (unsigned int)dlistint_len(*h))
		return (add_dnodeint_end(h, n));

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;

	p = *h;
	q = *h;

	for (i = 0; i <= idx && p->next; i++)
	{
		if (i == idx)
		{
			q = p->next;
			node->prev = p;
			p->next = node;
			node->next = q;
			q->prev = node;
			break;
		}
		p = p->next;
	}
	return (node);
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
