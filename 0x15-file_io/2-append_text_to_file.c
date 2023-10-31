#include "main.h"
/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: name of the file
 * @text_content: pointer to content to append
 *
 * Return: 1 succes, -1 failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t text_len, write_files;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		text_len = strlen(text_content);
		write_files = write(file, text_content, text_len);
		if (write_files != text_len)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
