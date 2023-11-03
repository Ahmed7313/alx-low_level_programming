#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to add at the end of the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t nwrite;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1); /* File does not exist or no permission */

	if (text_content != NULL)
	{
		nwrite = write(fd, text_content, _strlen(text_content));
		close(fd);
		if (nwrite == -1)
			return (-1); /* Writing failed */
	}
	else
	{
		/* text_content is NULL, just check if file is opened then close */
		close(fd);
	}

	return (1); /* Success */
}

/**
 * _strlen - Calculate the length of a string.
 * @str: The string to measure.
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (str && str[len])
		len++;

	return (len);
}
