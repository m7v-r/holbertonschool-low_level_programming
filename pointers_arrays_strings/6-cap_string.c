#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to modify
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *s)
{
	int i = 0;
	int j;
	char sep[] = " \t\n,;.!?\"(){}";

	/* التحقق من الحرف الأول في السلسلة */
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 32;

	while (s[i] != '\0')
	{
		/* البحث عن الفواصل */
		for (j = 0; sep[j] != '\0'; j++)
		{
			/* إذا كان الحرف الحالي فاصلاً، نتحقق من الحرف الذي يليه */
			if (s[i] == sep[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
		}
		i++;
	}

	return (s);
}
