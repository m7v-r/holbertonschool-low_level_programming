#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, and then in uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	/* الحلقة الأولى: طباعة الحروف الصغيرة */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch); /* الاستخدام الأول */
	}

	/* الحلقة الثانية: طباعة الحروف الكبيرة */
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch); /* الاستخدام الثاني (أعدنا استخدام نفس السطر برمجياً) */
	}

	putchar('\n'); /* الاستخدام الثالث والأخير */

	return (0);
}
