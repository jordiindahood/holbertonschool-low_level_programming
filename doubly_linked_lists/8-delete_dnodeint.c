#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node at a specific node
 * @h: dlistint_t **
 * @idx: unsigned int
 * @n: int
 * Return: dlistint_t
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *target, *pre, *aft;
	unsigned int i;

	if (index > dlistint_len(*head) || *head == NULL)
		return (-1);

	if (index == 0)
	{
		target = *head;
		*head = target->next;
		free(target);
		return (1);
	}

	if (index == (unsigned int)dlistint_len(*head))
		return (1);
	for (i = 0; target->next; i++)
	{
		if (i == index)
			break;
		target = target->next;
	}

	pre = target->prev;
	aft = target->next;
	
	free(target);

	aft->prev = pre;
	pre->next = aft;

	return (1);
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
