#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the integer converted from the string
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	unsigned int res = 0;
	int found_num = 0;

	while (s[i] != '\0')
	{
		/* 1. معالجة الإشارات قبل الرقم */
		if (s[i] == '-')
		{
			sign *= -1;
		}
		/* 2. إذا وجدنا رقماً */
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found_num = 1;
			res = (res * 10) + (s[i] - '0');
		}
		/* 3. إذا وجدنا أي حرف بعد البدء في قراءة الرقم، نتوقف */
		else if (found_num)
		{
			break;
		}
		i++;
	}

	return (res * sign);
}
