#include "lists.h"
/**
 * add_node - add a node the list
 * @h: const list_t *
 * Return: size_t number of elements.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *p, *q;

	p = malloc(sizeof(list_t));
	p->str = strdup(str);
	p->len = strlen(str);

	q = (list_t *)head;
	if (head)
	{
		while (q)
				q = q->next;
	}

	p->next = q->next;
	q->next = p;

	return (*head);
}
