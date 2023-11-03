#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: A NULL terminated string to add at the end of the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t nwrite;

	/* Check for NULL filename */
	if (filename == NULL)
		return (-1);

	/* Open file with append flag, without creating if it doesn't exist */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0) /* Check if file is opened */
		return (-1);

	/* If text_content is not NULL, write it to the file */
	if (text_content != NULL)
	{
		nwrite = write(fd, text_content, _strlen(text_content));
		if (nwrite == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd); /* Close the file descriptor */
	return (1);
}

/**
 * _strlen - Finds the length of a string.
 * @str: The string to measure.
 * Return: The length of the string.
 */
static int _strlen(char *str)
{
	int length = 0;

	if (str != NULL)
	{
		while (str[length])
			length++;
	}

	return (length);
}
