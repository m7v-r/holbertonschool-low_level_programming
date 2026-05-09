#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				temp = node->next;
				/* Free the strings duplicated by strdup */
				free(node->key);
				free(node->value);
				/* Free the node structure itself */
				free(node);
				node = temp;
			}
		}
	}
	/* Free the array of pointers and the table structure */
	free(ht->array);
	free(ht);
}
