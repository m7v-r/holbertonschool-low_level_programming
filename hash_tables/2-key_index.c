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

	/* 1. الحصول على قيمة الهاش الكبيرة باستخدام djb2 */
	hash = hash_djb2(key);

	/* 2. تحجيم القيمة لتناسب حجم المصفوفة باستخدام % */
	return (hash % size);
}
