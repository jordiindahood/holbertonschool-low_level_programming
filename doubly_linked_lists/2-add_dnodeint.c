#include "lists.h"
/**
 * add_dnodeint - add a node at the beginnig of the list
 * @head: list_t **
 * @n: const int
 * Return:  dlistint_t
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/*initializing p*/
	dlistint_t *p;

	p = malloc(sizeof(dlistint_t));
	if (p == NULL)
		return (NULL);

	/*inserting data*/
	p->n = n;

	/*adding the node in the beginnig of the linked list*/
	p->next = *head;
	p->prev = NULL;

	if (*head != NULL)
		(*head)->prev = p;

	/*making the new node the head pointer of the list */
	*head = p;

	return (*head);
}
