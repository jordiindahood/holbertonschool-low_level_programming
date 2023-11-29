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

	do
		p = malloc(sizeof(list_t));
	while (p == NULL);

	p->str = strdup(str);
	p->len = strlen(str);
	p->next = NULL;

	if (*head == NULL)
	{
		*head = p;
		return (*head);
	}

	i = *head;
	while(i->next != NULL)
		i = i->next;
	
	i->next = p;

	return (*head);
}
