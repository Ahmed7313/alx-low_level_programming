#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * close_file - Closes file descriptor.
 * @fd: The file descriptor to close.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * check_file_access - Checks the file access and opens files.
 * @from_fd: Pointer to the file descriptor of the source file.
 * @to_fd: Pointer to the file descriptor of the destination file.
 * @file_from: The name of the source file.
 * @file_to: The name of the destination file.
 */
void check_file_access(int *from_fd, int *to_fd,
	const char *file_from, const char *file_to)
{
	*from_fd = open(file_from, O_RDONLY);
	if (*from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	*to_fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (*to_fd == -1)
	{
		close_file(*from_fd);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
}

/**
 * do_copy - Copies content from one file to another.
 * @from_fd: The file descriptor of the source file.
 * @to_fd: The file descriptor of the destination file.
 */
void do_copy(int from_fd, int to_fd)
{
	ssize_t r_count, w_count;
	char buf[BUFFER_SIZE];

	while ((r_count = read(from_fd, buf, BUFFER_SIZE)) > 0)
	{
		w_count = write(to_fd, buf, r_count);
		if (w_count != r_count)
		{
			close_file(from_fd);
			close_file(to_fd);
			dprintf(STDERR_FILENO, "Error: Can't write to fd %d\n", to_fd);
			exit(99);
		}
	}
	if (r_count == -1)
	{
		close_file(from_fd);
		close_file(to_fd);
		perror("Error: Can't read from fd");
		exit(98);
	}
}

/**
 * copy_content - Orchestrates the file copying process.
 * @file_from: The name of the source file.
 * @file_to: The name of the destination file.
 */
void copy_content(const char *file_from, const char *file_to)
{
	int from_fd, to_fd;

	check_file_access(&from_fd, &to_fd, file_from, file_to);
	do_copy(from_fd, to_fd);
	close_file(from_fd);
	close_file(to_fd);
}

