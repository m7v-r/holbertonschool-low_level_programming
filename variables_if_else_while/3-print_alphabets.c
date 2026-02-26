#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, and then in uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	/* Print lowercase a-z */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	/* Print uppercase A-Z */
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}

	/* Print newline */
	putchar('\n');

	return (0);
}
