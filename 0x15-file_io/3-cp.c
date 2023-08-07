#include "main.h"

/**
 * error_code - prints error messages and exits with value
 * @error: error number
 * @s: string
 * @fd: file descriptor
 * Return: 0 on success
 **/
int error_code(int error, char *s, int fd)
{
	switch (error)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(error);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		exit(error);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
		exit(error);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(error);
	default:
		return (0);
	}
}

/**
 * main - main block, copies one file to another
 * @argc: argument counter
 * @argv: array of arguments, a pointer
 * Return: 0 (success), 97-100 (error codes)
 */
int main(int argc, char *argv[])
{
	int fd_1, fd_2, read_count, wrote_count;
	char *buffer[1024];

	if (argc != 3)
		error_code(97, NULL, 0);

	/*  file descriptor for copy-to file */
	fd_2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_2 == -1)
		error_code(99, argv[2], 0);

	/* file descriptor for copy-from file */
	fd_1 = open(argv[1], O_RDONLY);
	if (fd_1 == -1)
		error_code(98, argv[1], 0);

	/* read the original file and copy content to new file */
	while ((read_count = read(fd_1, buffer, 1024)) != 0)
	{
		if (read_count == -1)
			error_code(98, argv[1], 0);

		wrote_count = write(fd_2, buffer, read_count);
		if (wrote_count == -1)
			error_code(99, argv[2], 0);
	}

	close(fd_2) == -1 ? (error_code(100, NULL, fd_2)) : close(fd_2);
	close(fd_1) == -1 ? (error_code(100, NULL, fd_1)) : close(fd_1);
	return (0);
}
