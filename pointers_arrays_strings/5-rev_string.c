#include "main.h"

/**
 * rev_string - reverses a string in place
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0;
	char temp;
	int end;

	/* 1. Get length of the string */
	while (s[len] != '\0')
	{
		len++;
	}

	end = len - 1;

	/* 2. Swap characters from both ends */
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[end];
		s[end] = temp;
		end--;
	}
}
