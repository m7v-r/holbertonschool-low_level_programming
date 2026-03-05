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

	/* الخطوة 1: إيجاد طول السلسلة */
	while (s[len] != '\0')
	{
		len++;
	}

	/* الخطوة 2: الطباعة العكسية (نبدأ من الحرف الذي يسبق \0 مباشرة) */
	for (len--; len >= 0; len--)
	{
		_putchar(s[len]);
	}

	_putchar('\n');
}
