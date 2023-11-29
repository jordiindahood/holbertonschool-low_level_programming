#include "lists.h"
/**
 * free_list - free list
 * @head: list *
 * Return: list_t
 */
void free_list(list_t *head)
{
    list_t *pNode = head, *pNext;

    while (NULL != pNode)
    {
        pNext = pNode->next;
        free(pNode);
        pNode = pNext;
    }

}
