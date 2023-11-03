#include "main.h"
#include <stdio.h>  
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define BUF_SIZE 1024

void check_argc(int argc);
void close_file(int fd);
void copy_content(const char *file_from, const char *file_to);

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments.
 * @argv: The argument vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	check_argc(argc);
	copy_content(argv[1], argv[2]);
	return (0);
}

/**
 * check_argc - Checks if the number of arguments is correct.
 * @argc: The number of arguments.
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
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to close.
 */
void close_file(int fd)
{
	if (close(fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_content - Copies the content of a file to another.
 * @file_from: The source file.
 * @file_to: The destination file.
 */
void copy_content(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, rd, wr;
	char buf[BUF_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to < 0)
	{
		close_file(fd_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	while ((rd = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		wr = write(fd_to, buf, rd);
		if (wr < 0)
		{
			close_file(fd_from);
			close_file(fd_to);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}

	if (rd < 0)
	{
		close_file(fd_from);
		close_file(fd_to);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	close_file(fd_from);
	close_file(fd_to);
}
