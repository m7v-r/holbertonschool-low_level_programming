#include "main.h"

/**
 * create_file - Creates a file and writes text_content into it.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n_written, len = 0;

	if (filename == NULL)
		return (-1);

	/* Calculate length of text_content if it's not NULL */
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	/*
	 * O_CREAT: Create file if it doesn't exist
	 * O_RDWR: Open for reading and writing
	 * O_TRUNC: Truncate file to 0 length if it exists
	 * 0600: Permissions rw-------
	 */
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		n_written = write(fd, text_content, len);
		if (n_written == -1 || n_written != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
