#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - Appends text at the end of an existing file.
 * @filename: Name of the target file.
 * @text_content: NULL-terminated string to append (may be NULL).
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t len = 0;
	ssize_t n_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
