#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - Creates a file and writes text_content into it.
 * @filename: Name of the file to create or truncate.
 * @text_content: NULL-terminated string to write (may be NULL).
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len = 0;
	ssize_t n_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;

		n_written = write(fd, text_content, len);
		if (n_written < 0 || (size_t)n_written != len)
		{
			close(fd);
			return (-1);
		}
	}

	if (close(fd) < 0)
		return (-1);

	return (1);
}
