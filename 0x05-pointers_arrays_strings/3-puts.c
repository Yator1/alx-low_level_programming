#include"main.h"
/**
 * _puts- a functions that prints a string followed by a new line
 * tp stdout
 * @str: input string
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
