#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: pointer to the start of the matrix
 * @size: width/height of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	long int sum1 = 0;
	long int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		/* القطر الرئيسي: a[i][i] */
		sum1 += a[i * (size + 1)];

		/* القطر الفرعي: a[i][size - 1 - i] */
		sum2 += a[(i + 1) * (size - 1)];
	}

	printf("%ld, %ld\n", sum1, sum2);
}
