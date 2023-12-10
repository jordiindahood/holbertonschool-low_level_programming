#include "hash_tables.h"
/**
 * hash_table_get - check the code
 * @key: char
 * @ht: table
 * Return: Always EXIT_SUCCESS.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int res;
	hash_node_t *node;

	if (!ht || !key)
		return (0);
	res = hash_djb2((unsigned char *)key) % ht->size;
	node = ht->array[res];
	if (!node)
	{
		return (NULL);
	}

	while (node)
	{
		if (strcmp(node->key, key) == 0)
		{
			if (!node->value)
				return (NULL);
			break;
		}
		node = node->next;
	}
	return (node->value);
}
