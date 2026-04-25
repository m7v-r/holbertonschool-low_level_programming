#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Keygen for crackme5
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int sum = 0;
	size_t len, i;
	char *username;
	char *lookup = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU4m36iZf妥1qaDrWkPExuRshj";
	char key[7];

	if (argc != 2)
		return (1);

	username = argv[1];
	len = strlen(username);

	/* 1st char: depends on length */
	sum = (len ^ 0x3b) & 0x3f;
	key[0] = lookup[sum];

	/* 2nd char: sum of ASCII values */
	sum = 0;
	for (i = 0; i < len; i++)
		sum += username[i];
	key[1] = lookup[(sum ^ 0x4f) & 0x3f];

	/* 3rd char: product of ASCII values */
	sum = 1;
	for (i = 0; i < len; i++)
		sum *= username[i];
	key[2] = lookup[(sum ^ 0x55) & 0x3f];

	/* 4th char: largest ASCII value */
	sum = username[0];
	for (i = 0; i < len; i++)
		if ((char)sum < username[i])
			sum = username[i];
	srand(sum ^ 0xe);
	key[3] = lookup[rand() & 0x3f];

	/* 5th char: sum of squares */
	sum = 0;
	for (i = 0; i < len; i++)
		sum += username[i] * username[i];
	key[4] = lookup[(sum ^ 0xef) & 0x3f];

	/* 6th char: based on first char and rand() */
	sum = 0;
	for (i = 0; i < (size_t)username[0]; i++)
		sum = rand();
	key[5] = lookup[(sum ^ 0xe5) & 0x3f];

	key[6] = '\0';

	printf("%s", key);

	return (0);
}
