#include"main.h"
/**
 * *_strcpy-copies the string to dest by a src
 * @dest: pointer to a char type string destination
 * @src: pointer to a char type string source
 * Return: a cahr pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int j = -1;

	do {
		j++;
		dest[j] = src[j];
	} while (src[j] != '\0');

	return (dest);
}
