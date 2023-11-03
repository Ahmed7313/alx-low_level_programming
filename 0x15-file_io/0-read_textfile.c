#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * open_file - Opens a file
 * @filename: The name of the file to open
 * Return: File descriptor on success, -1 on failure
 */
static int open_file(const char *filename)
{
	return (open(filename, O_RDONLY));
}

/**
 * read_file - Reads from a file
 * @fd: The file descriptor to read from
 * @buffer: The buffer to read the data into
 * @letters: The number of letters to read and print
 * Return: Number of letters it could read and print
 */
static ssize_t read_file(int fd, char *buffer, size_t letters)
{
	return (read(fd, buffer, letters));
}

/**
 * write_to_stdout - Writes to standard output
 * @buffer: The buffer containing the data to write
 * @num: The number of bytes to write
 * Return: Number of bytes it could write
 */
static ssize_t write_to_stdout(char *buffer, ssize_t num)
{
	return (write(STDOUT_FILENO, buffer, num));
}

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file to read
 * @letters: The number of letters it should read and print
 * Return: Actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread, nwritten;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open_file(filename);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	nread = read_file(fd, buffer, letters);
	if (nread > 0)
		nwritten = write_to_stdout(buffer, nread);

	free(buffer);
	close(fd);

	if (nread > 0 && nwritten == nread)
		return (nwritten);

	return (0);
}
