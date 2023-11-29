#include "lists.h"
/**
 * add_node_end - add node in the end of a list
 * @head: list **
 * @str: const char *str
 * Return: list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p, *i;

	do {
		p = malloc(sizeof(list_t));
	} while (p == NULL);

	i = (list_t *)head;
	while (i)
	{
		if (i->next)
			i = i->next;
		else
			break;
	}

	p->str = strdup(str);
	p->len = strlen(str);
	p->next = NULL;

	i->next = p;

	return (*head);
}