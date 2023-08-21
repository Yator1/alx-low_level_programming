#include"main.h"
/**
 * _strlen(char *s)- a function that returns the length of a string
 * @s: string variable
 * Return: length
 */
void _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
