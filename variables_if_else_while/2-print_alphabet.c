#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	/* حلقة تبدأ من حرف 'a' وتنتهي عند حرف 'z' */
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch); /* الاستخدام الأول */
	}

	putchar('\n'); /* الاستخدام الثاني والأخير */

	return (0);
}
