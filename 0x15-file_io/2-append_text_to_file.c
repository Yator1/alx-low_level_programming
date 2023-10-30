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
	FILE *file;
	ssize_t text_len, write_files;

	if (filename == NULL)
		return (-1);
	file = fopen(filename, "a");
	if (file == NULL)
		return (-1);
	text_len = strlen(text_content);
	write_files = fwrite(text_content, 1, text_len, file);
	fclose(file);
	if (write_files != text_len)
		return (-1);
	return (1);
}
