#include "lists.h"
/**
 * sum_dlistint - sum all the data in the list
 * @head: dlistint_t *
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *p;
	int res;

	if (head == NULL)
		return (0);

	p = head;
	i = 0;
	while (p != NULL)
	{
        res += p->n;
		p = p->next;
	}

	return (res);
}
