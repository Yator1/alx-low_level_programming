#include "main.h"
/**
* read_textfile- Read text file and prints to the POSIX STDOUT.
* @filename: text file being read
* @letters: number of letters to be read
* Return: w- actual number of bytes read and printed
* 0 when function fails or filename is NULL.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int file_des;
ssize_t noRD, noWR;
char *buffer;

if (filename == NULL)
return (0);

file_des = open(filename, O_RDONLY);

if (file_des == -1)
return (0);

buffer = malloc(sizeof(char) * letters);

if (!buffer)
return (0);

noRD = read(file_des, buffer, letters);
noWR = write(STDOUT_FILENO, buffer, noRD);

close(file_des);
free(buffer);
return (noWR);
}
