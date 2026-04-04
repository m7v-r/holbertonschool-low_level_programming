#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_digit - checks if a string contains only digits
 * @s: string to check
 * Return: 1 if all digits, 0 otherwise
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to measure
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * multiply - handles the multiplication logic
 * @s1: first string number
 * @s2: second string number
 * @l1: length of s1
 * @l2: length of s2
 * @res: pointer to result array
 */
void multiply(char *s1, char *s2, int l1, int l2, int *res)
{
	int i, j, digit1, digit2, carry;

	for (i = l1 - 1; i >= 0; i--)
	{
		digit1 = s1[i] - '0';
		carry = 0;
		for (j = l2 - 1; j >= 0; j--)
		{
			digit2 = s2[j] - '0';
			carry += res[i + j + 1] + (digit1 * digit2);
			res[i + j + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			res[i + j + 1] += carry;
	}
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, a = 0, *result;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}
	s1 = argv[1], s2 = argv[2];
	len1 = _strlen(s1), len2 = _strlen(s2);
	len = len1 + len2;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i < len; i++)
		result[i] = 0;
	multiply(s1, s2, len1, len2, result);
	for (i = 0; i < len; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
