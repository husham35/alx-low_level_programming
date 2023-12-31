#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file if it exist
 * @filename: name of file
 * @text_content: content to add to end of file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc, status, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	file_desc = open(filename, O_APPEND | O_WRONLY);
	if (file_desc == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;
	status = write(file_desc, text_content, i);
	if (status == -1)
		return (-1);

	close(file_desc);

	return (1);
}
