#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node at a specific node
 * @head: dlistint_t **
 * @index: unsigned int
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *target = *head;

	if (head)
	{
		while (index && target)
		{
			target = target->next;
			index--;
		}
		if (!index && target)
		{
			if (target->next)
				target->next->prev = target->prev;
			if (target->prev)
				target->prev->next = target->next;
			else
				*head = target->next;
			free(target);
			return (1);
		}
	}

	return (-1);
}