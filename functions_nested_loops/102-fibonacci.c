#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	long int f1 = 1, f2 = 2, next;

	/* طباعة الرقمين الأولين */
	printf("%ld, %ld", f1, f2);

	/* حلقة لحساب وطباعة بقية الأرقام (من الرقم 3 إلى 50) */
	for (count = 3; count <= 50; count++)
	{
		next = f1 + f2;
		printf(", %ld", next);

		/* تحديث القيم للدورة القادمة */
		f1 = f2;
		f2 = next;
	}

	printf("\n");

	return (0);
}
