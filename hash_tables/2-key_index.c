#include "hash_tables.h"

/**
 * key_index - check the code
 * @size: long int
 * @key: char
 * Return: Always EXIT_SUCCESS.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long res;

	res = hash_djb2((unsigned char *)key) % size;

	return (res);
}
