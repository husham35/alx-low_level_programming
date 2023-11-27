#include "main.h"

/**
 * create_file - creates a file with read and write access
 * If the file already exists, do not change the permissions
 * @filename: name of file to be create
 * @text_content: content to write to file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc, read_status;
	unsigned int i;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_desc == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		read_status = write(file_desc, text_content, i);
		if (read_status == -1)
			return (-1);
	}

	close(file_desc);
	return (1);
}
