#include "hash_tables.h"

/**
 * key_index - Gives the index of a key.
 * @key: The key (string).
 * @size: The size of the array of the hash table.
 *
 * Return: The index at which the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	/* Get the hash value using djb2 algorithm */
	hash = hash_djb2(key);

	/* Return the index using modulo operator */
	return (hash % size);
}
