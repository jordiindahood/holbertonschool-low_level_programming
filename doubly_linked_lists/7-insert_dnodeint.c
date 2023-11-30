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

	if (*h == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t));
	if(node)
		return(NULL);
	node->n = n;

	p = *h;
	q = *h;
	i = 0;

	while (p != NULL)
	{
		if (i == idx)
			break;
		p = p->next;
		i++;
	}

	if (p->next == NULL)
		return(NULL);

	q = p->next;

	p->next = node;
	node->next = q;
	q->prev = node;
	node->prev = p;

	return (*h);
}
