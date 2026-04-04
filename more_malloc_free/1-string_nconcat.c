#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes of s2 to concatenate
 *
 * Return: Pointer to the newly allocated space in memory, or NULL if fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, i, j;

	/* Treat NULL as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Determine length of s1 and s2 */
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	/* If n >= len2, use the entire string s2 */
	if (n >= len2)
		n = len2;

	/* Allocate memory: len1 + n bytes for chars + 1 for null terminator */
	concat = malloc(sizeof(char) * (len1 + n + 1));

	if (concat == NULL)
		return (NULL);

	/* Copy s1 into concat */
	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	/* Copy first n bytes of s2 into concat */
	for (j = 0; j < n; j++, i++)
		concat[i] = s2[j];

	/* Add the null terminator */
	concat[i] = '\0';

	return (concat);
}
