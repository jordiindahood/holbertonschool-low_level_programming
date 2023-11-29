#include "lists.h"
/**
 * free_list - free list
 * @head: list *
 * Return: list_t
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *p;

		p = head;
		head = head->next;
		free(p);
	}
}
