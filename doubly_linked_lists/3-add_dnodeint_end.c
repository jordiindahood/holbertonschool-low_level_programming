#include "lists.h"
/**
 * add_dnodeint_end - add node in the end of a list
 * @head: list **
 * @n: const int
 * Return: list_t
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *p, *i;

	do
		p = malloc(sizeof(list_t));
	while (p == NULL);

	p->n = n;
	p->next = NULL;

	if (*head == NULL)
	{
		*head = p;
		return (*head);
	}

	i = *head;
	while (i->next != NULL)
		i = i->next;

	i->next = p;

	return (*head);
}
