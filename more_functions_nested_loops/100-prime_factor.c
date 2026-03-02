#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long n = 612852475143;
	long divisor = 2;

	while (n > 1)
	{
		if (n % divisor == 0)
		{
			n /= divisor;
		}
		else
		{
			divisor++;
		}
	}
	printf("%ld\n", divisor);

	return (0);
}
