#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible different combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1, n2;

	for (n1 = 0; n1 <= 8; n1++)
	{
		for (n2 = n1 + 1; n2 <= 9; n2++)
		{
			putchar(n1 + '0'); /* الرقم الأول */
			putchar(n2 + '0'); /* الرقم الثاني */

			/* لا تطبع الفاصلة بعد آخر مجموعة وهي 89 */
			if (n1 != 8 || n2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
