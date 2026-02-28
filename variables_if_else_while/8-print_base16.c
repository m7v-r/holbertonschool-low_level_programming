#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char ch;

	/* الحلقة الأولى: طباعة الأرقام من 0 إلى 9 */
	for (n = 0; n < 10; n++)
	{
		putchar(n + '0'); /* الاستخدام الأول */
	}

	/* الحلقة الثانية: طباعة الحروف من a إلى f */
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch); /* الاستخدام الثاني */
	}

	putchar('\n'); /* الاستخدام الثالث */

	return (0);
}
