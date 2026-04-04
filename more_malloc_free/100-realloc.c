#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated
 * @old_size: The size in bytes of the allocated space for ptr
 * @new_size: The new size in bytes of the new memory block
 *
 * Return: Pointer to the newly allocated memory, or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr;
	unsigned int i, limit;

	/* Case 1: new_size == old_size */
	if (new_size == old_size)
		return (ptr);

	/* Case 2: ptr is NULL */
	if (ptr == NULL)
		return (malloc(new_size));

	/* Case 3: new_size is 0 and ptr is not NULL */
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* Allocate new memory */
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	/* Copy contents */
	old_ptr = ptr;
	if (new_size < old_size)
		limit = new_size;
	else
		limit = old_size;

	for (i = 0; i < limit; i++)
		new_ptr[i] = old_ptr[i];

	/* Free the old memory block */
	free(ptr);

	return (new_ptr);
}
