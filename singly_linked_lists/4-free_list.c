#include "lists.h"
/**
 * free_list - free list
 * @head: list **
 * Return: list_t
 */
void free_list(list_t *head)
{
	list_t *p;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}
}
