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
	while (p != NULL)
	{
		p = p->next;
		i++;
		if (i == index)
			return (p);
	}
	return (NULL);
}
