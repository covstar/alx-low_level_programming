#include <errno.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 *
 * Return: 0 on success, or an error code on failure
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to;
	ssize_t n_read;
	char buffer[BUFFER_SIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd_to == -1)
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((n_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	if (write(fd_to, buffer, n_read) != n_read)
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	if (n_read == -1)
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

	if (close(fd_from) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);

	if (close(fd_to) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);

	return (0);
}
