#include "main.h"
/**
 * print_rev- function that prints astring in reverse
 * @s: the string input
 * Return:void
 */
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	while (length)
		_putchar(s[--length]);
	_putchar('\n');
}
