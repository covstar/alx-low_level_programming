#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: name of file to append to
 * @text_content: NULL terminated string to append to file
 *
 * Return: 1 on success, -1 on failure (file does not exist or write fails)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t n_written;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
