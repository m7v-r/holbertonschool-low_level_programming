#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
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
	 * O_WRONLY: Open for writing only
	 * O_APPEND: The file offset is set to the end of the file before each write
	 * No O_CREAT here because we don't create the file if it doesn't exist
	 */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* If text_content is NULL, we don't write anything, just return 1 */
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
