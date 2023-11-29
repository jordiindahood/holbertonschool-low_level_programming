#include "lists.h"
/**
 * free_list - free list
 * @head: list **
 * Return: list_t
 */
void free_list(list_t *head)
{
	free(head);
}
