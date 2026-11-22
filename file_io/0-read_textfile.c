#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX standard output.
 * @filename: Path to the file to read.
 * @letters: Maximum number of bytes to read and print.
 *
 * Return: Actual number of bytes read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_written;
	char *buf;

	if (filename == NULL || letters == 0)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(buf);
		return (0);
	}

	n_read = read(fd, buf, letters);
	if (n_read < 0)
	{
		close(fd);
		free(buf);
		return (0);
	}

	n_written = write(STDOUT_FILENO, buf, n_read);
	close(fd);
	free(buf);

	if (n_written < 0 || n_written != n_read)
		return (0);

	return (n_written);
}
