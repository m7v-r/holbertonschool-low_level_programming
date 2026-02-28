#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * in the Fibonacci sequence below 4,000,000.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long f1 = 1, f2 = 2, next = 0, sum = 2;

	while (next <= 4000000)
	{
		next = f1 + f2;
		if (next % 2 == 0)
			sum += next;

		f1 = f2;
		f2 = next;
	}

	printf("%lu\n", sum);

	return (0);
}
