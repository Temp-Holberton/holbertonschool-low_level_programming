#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUF_SIZE 1024

/**
 * close_fd - Closes a file descriptor and exits with code 100 on failure.
 * @fd: File descriptor to close.
 */
void close_fd(int fd)
{
	if (close(fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_content - Copies data in 1024-byte chunks between two descriptors.
 * @fd_from: Source file descriptor.
 * @fd_to: Destination file descriptor.
 * @from_name: Source filename for error reporting.
 * @to_name: Destination filename for error reporting.
 */
void copy_content(int fd_from, int fd_to, char *from_name, char *to_name)
{
	ssize_t n_read, n_written;
	char buf[BUF_SIZE];

	while ((n_read = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		n_written = write(fd_to, buf, n_read);
		if (n_written < 0 || n_written != n_read)
		{
			close_fd(fd_from);
			close_fd(fd_to);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to_name);
			exit(99);
		}
	}

	if (n_read < 0)
	{
		close_fd(fd_from);
		close_fd(fd_to);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from_name);
		exit(98);
	}
}

/**
 * main - Copies the contents of one file to another file.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 on success.
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to < 0)
	{
		close_fd(fd_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	copy_content(fd_from, fd_to, argv[1], argv[2]);
	close_fd(fd_from);
	close_fd(fd_to);
	return (0);
}
