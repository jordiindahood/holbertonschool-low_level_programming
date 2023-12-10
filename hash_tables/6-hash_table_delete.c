#include "hash_tables.h"
/**
 * hash_table_delete - check the code
 * @ht: table
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node, *temp;

	if (!ht)
		return;

	while (i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{
			temp = node;
			node = node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
