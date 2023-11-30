#include "lists.h"
/**
 * get_dnodeint_at_index - get the node at the specific index
 * @head: dlistint_t *
 * @index: unsigned int
 * Return: dlistint_t *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *p;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	p = head;
	i=0;
	while (p != NULL)
	{
		if (i == index)
			return (p);
		p = p->next;
		i++;
	}

	return (NULL);
}
