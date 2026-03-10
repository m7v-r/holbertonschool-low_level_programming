#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: double pointer to the string we want to modify
 * @to: the string we want the pointer to point to
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
