#include "main.h"
#define BUFF_SIZE 1024

/**
 * exit_error - print error mesaage and exits
 * @text: the message to print
 * @file: name of the file
 * @code: exit code
 */

void exit_error(char *text, char *file, int code)
{
	if (file == NULL)
		dprintf(STDERR_FILENO, "%s\n", text);
	else
		dprintf(STDERR_FILENO, "%s %s\n", text, file);
	exit(code);
}

/**
 * main - checks the code
 * @argc: number of argument
 * @argv: pointer to the argument
 *
 * Return: always 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char buffer[BUFF_SIZE], *file_from, *file_to;
	ssize_t fd_read, fd_write;

	if (argc != 3)
		exit_error("Usage: cp file_from file_to", NULL, 97);

	file_from = argv[1];
	file_to = argv[2];
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		exit_error("Error: Can't read from file", argv[1], 98);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		exit_error("Error: Can't write to", argv[2], 99);

	while ((fd_read = read(fd_from, buffer, BUFF_SIZE)) > 0)
	{
		fd_write = write(fd_to, buffer, fd_read);
		if (fd_write == -1)
			exit_error("Error: Can't write to", argv[2], 99);
	}

	if (fd_read == -1)
		exit_error("Error: Can't read from file", argv[1], 98);
	if (close(fd_from) == -1)
		exit_error("Error: Can't close fd FD_VALUE", NULL, 100);
	if (close(fd_to) == -1)
		exit_error("Error: Can't close fd FD_VALUE", NULL, 100);

	return (0);
}
