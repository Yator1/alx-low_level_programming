#include "main.h"
/**
 * read_textfile - read a text file and prints i to POSIX STDOUT
 * @filename: pointer to the file
 * @letters: number of letters in the text file
 *
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char *buffer;
	ssize_t read_files, write_files;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	read_files = fread(buffer, 1, letters, file);
	if (read_files == -1)
	{
		free(file);
		fclose(file);
		return (0);
	}

	write_files = write(STDOUT_FILENO, buffer, read_files);
	if (write_files == -1)
	{
		free(buffer);
		fclose(file);
		return (0);
	}
	free(buffer);
	fclose(file);

	return (read_files);
}
