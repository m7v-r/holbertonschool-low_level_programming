#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: A pointer to the hash table structure.
 * @key: The key you are looking for.
 *
 * Return: The value associated with the element,
 *         or NULL if key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/* 1. Calculate the index where the key should be */
	index = key_index((const unsigned char *)key, ht->size);

	/* 2. Look into the linked list at that index */
	node = ht->array[index];
	while (node != NULL)
	{
		/* 3. If we find a matching key, return its value */
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	/* If we reach here, the key was not found */
	return (NULL);
}
