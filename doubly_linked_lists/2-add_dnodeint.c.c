#include "lists.h"
/**
 * add_node - add a node the list
 * @head: list_t **
 * @str: const char *
 * Return: size_t number of elements.
 */
list_t *add_node(list_t **head, const int n)
{
	/*initializing p*/
	dlistint_t *p;

	do {
	p = malloc(sizeof(dlistint_t));
	} while (p == NULL);

	/*inserting data*/
	p->len = n;

	/*adding the node in the beginnig of the linked list*/
	p->next = *head;

	/*making the new node the head pointer of the list */
	*head = p;

	return (*head);
}
