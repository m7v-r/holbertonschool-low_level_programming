#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0'); /* الاستخدام الأول: طباعة الرقم */

		if (n < 9)
		{
			putchar(','); /* الاستخدام الثاني: الفاصلة */
			putchar(' '); /* الاستخدام الثالث: المسافة */
		}
	}

	putchar('\n'); /* الاستخدام الرابع: السطر الجديد */

	return (0);
}
