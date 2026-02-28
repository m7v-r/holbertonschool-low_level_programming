#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single digit numbers of base 10 using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		/* 48 هو كود ASCII للرقم '0' */
		putchar(n + '0');
	}
	putchar('\n');

	return (0);
}
