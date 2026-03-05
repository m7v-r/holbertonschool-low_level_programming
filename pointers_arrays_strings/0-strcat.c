#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	/* 1. التحرك إلى نهاية السلسلة الأولى (dest) */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* 2. نسخ أحرف السلسلة الثانية (src) إلى نهاية dest */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* 3. إضافة الـ null byte في النهاية */
	dest[i] = '\0';

	return (dest);
}
