#include "main.h"

/**
 * print_number - prints an integer using only _putchar
 * @n: the integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int num;

	/* التعامل مع الأرقام السالبة */
	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}

	/* استخدام العودية لطباعة الخانات بالترتيب الصحيح */
	if (num / 10)
	{
		print_number(num / 10);
	}

	/* طباعة الخانة الأخيرة */
	_putchar((num % 10) + '0');
}
