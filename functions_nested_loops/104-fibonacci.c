#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long f1_h = 0, f1_t = 1, f2_h = 0, f2_t = 2;
	unsigned long next_h, next_t, lim = 1000000000;
	int i;

	printf("%lu, %lu", f1_t, f2_t);

	for (i = 3; i <= 98; i++)
	{
		next_t = f1_t + f2_t;
		next_h = f1_h + f2_h + (next_t / lim);
		next_t %= lim;

		printf(", ");
		if (next_h > 0)
			printf("%lu%09lu", next_h, next_t);
		else
			printf("%lu", next_t);

		f1_h = f2_h;
		f1_t = f2_t;
		f2_h = next_h;
		f2_t = next_t;
	}
	printf("\n");
	return (0);
}
