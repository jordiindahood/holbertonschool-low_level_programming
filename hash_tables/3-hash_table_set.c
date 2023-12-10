#include "hash_tables.h"
/**
 * hash_table_set - check the code
 * @value: long int
 * @key: char
 * @ht: table
 * Return: Always EXIT_SUCCESS.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int res;
	hash_node_t *node1;
	hash_node_t *node2;

	if (!ht || !key || !value)
		return (0);
	res = hash_djb2((unsigned char *)key) % ht->size;
	node1 = ht->array[res];
	while (node1)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			if (!node->value)
				return (0);
			return (1);
		}
		node1 = node->next;
	}
	node2 = malloc(sizeof(hash_node_t));
	if (!node2)
		return (0);
	node1->key = strdup(key);
	if (!node2->key)
	{
		free(node2);
		return (0);
	}
	node2->value = strdup(value);
	if (!node2->value)
	{
		free(node2->key);
		free(node2);
		return (0);
	}
	node2->next = ht->array[res];
	ht->array[res] = node2;
	return (1);
}
