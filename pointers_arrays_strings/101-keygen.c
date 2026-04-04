#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
	int sum = 0;
	char c;

	srand(time(NULL));

	/* نولد حروفاً عشوائية حتى يقترب المجموع من 2772 */
	/* نترك مساحة كافية لآخر حرف يكمل المجموع بدقة */
	while (sum <= (2772 - 126))
	{
		c = rand() % 126;
		if (c > 32) /* نتجنب الحروف غير القابلة للطباعة */
		{
			putchar(c);
			sum += c;
		}
	}

	/* الحرف الأخير الذي سيوصلنا للرقم 2772 تماماً */
	putchar(2772 - sum);

	return (0);
}
