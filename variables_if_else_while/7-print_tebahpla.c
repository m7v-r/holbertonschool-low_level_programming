#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	/* تبدأ الحلقة من 'z' وتنقص حتى تصل إلى 'a' */
	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
