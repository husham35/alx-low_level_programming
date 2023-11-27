#include "main.h"

/**
 * read_textfile - reads a certain size and prints to std output
 * @filename: file to be read from
 * @letters: size to be read
 * Return: the actual size read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t read_count, wrote_count;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDWR);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	read_count = read(file_descriptor, buffer, letters);
	if (read_count == -1)
		return (0);

	wrote_count = write(STDOUT_FILENO, buffer, read_count);
	if (wrote_count == -1 || read_count != wrote_count)
		return (0);
	free(buffer);

	close(file_descriptor);
	return (wrote_count);
}
