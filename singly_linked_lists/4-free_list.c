#include "lists.h"
/**
 * free_list - free list
 * @head: list *
 * Return: list_t
 */
void free_list(list_t *head)
{
	list_t *node=head,*next_node;

	while (head != NULL)
	{
		next_node = node->next;
		free(node);
		node = next_node;
		free(p);
	}
}
