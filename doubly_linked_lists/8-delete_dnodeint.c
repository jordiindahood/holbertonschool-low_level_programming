#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node at a specific node
 * @head: dlistint_t **
 * @index: unsigned int
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *target = *head, *pre, *aft;
	unsigned int i;
	unsigned int size = dlistint_len(*head) -1;

	if (index > size || *head == NULL)
		return (-1);

	if (index == 0)
	{
		target = *head;
		*head = target->next;
		free(target);
		return (1);
	}

	i = 0;
	while (i <= index)
	{
		target = target->next;
		i++;
	}

	if (index == size)
	{
		pre = target->prev;
		pre->next = NULL;
		free(target);
		return (1);
	}

	pre = target->prev;
	aft = target->next;
	pre->next = aft;
	aft->prev = pre;
	target->next = NULL;
	target->prev = NULL;

	free(target);

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
