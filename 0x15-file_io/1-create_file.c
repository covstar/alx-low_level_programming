#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t n_written;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	return (-1);

	if (text_content != NULL)
{
		n_written = write(fd, text_content, strlen(text_content));
		if (n_written == (size_t)-1 || n_written != strlen(text_content))
{
		close(fd);
		return (-1);
}
}

	close(fd);

	return (1);
}
