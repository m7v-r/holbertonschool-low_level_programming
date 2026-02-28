#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Description: Prints a-z followed by a new line
 * Return: void
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch); /* الاستخدام الأول */
	}
	_putchar('\n'); /* الاستخدام الثاني */
}
