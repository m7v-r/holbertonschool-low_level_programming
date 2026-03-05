#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;

	/* Find string length */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Print in reverse */
	for (len--; len >= 0; len--)
	{
		_putchar(s[len]);
	}

	_putchar('\n');
}
