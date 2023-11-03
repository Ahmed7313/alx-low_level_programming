#include "main.h"
#define BUF_SIZE 1024

void check_argc(int argc);
void close_file(int fd, char *filename);
void copy_content(int file_from, int file_to,
		  char *file_from_name, char *file_to_name);

/**
 * main - Entry point, copies content from one file to another
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, other numbers based on type of failure
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;

	check_argc(argc);

	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* Ensure the line below does not exceed 80 characters */
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to < 0)
	{
		close(file_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	copy_content(file_from, file_to, argv[1], argv[2]);

	close_file(file_from, argv[1]);
	close_file(file_to, argv[2]);

	return (0);
}

/**
 * check_argc - Checks if the number of arguments is correct
 * @argc: The number of arguments
 */
void check_argc(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * close_file - Closes a file descriptor and prints an error if it fails
 * @fd: The file descriptor to close
 * @filename: The name of the file associated with the descriptor
 */
void close_file(int fd, char *filename)
{
	if (close(fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", filename);
		exit(100);
	}
}

/**
 * copy_content - Copies the content of a file to another
 * @file_from: The file descriptor for the source file
 * @file_to: The file descriptor for the destination file
 * @file_from_name: The name of the source file
 * @file_to_name: The name of the destination file
 */
void copy_content(int file_from, int file_to,
		  char *file_from_name, char *file_to_name)
{
	ssize_t r, w;
	char buf[BUF_SIZE];

	while ((r = read(file_from, buf, BUF_SIZE)) > 0)
	{
		w = write(file_to, buf, r);
		if (w != r)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file_to_name);
			exit(99);
		}
	}

	if (r == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", file_from_name);
		exit(98);
	}
}
