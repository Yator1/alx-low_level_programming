#include "main.h"
/**
 * puts_half- a function that prints half of a string, followed by a new line
 * @str: pointer to a string
 * Return: 0
 */
void puts_half(char *str)
{
	int half_len, full_len;

	full_len = 0;

	while (str[full_len] != '\0')
		full_len++;

	half_len = full_len / 2;

	if (full_len % 2 == 1)
		half_len++;

	while (half_len < full_len)
	{
		_putchar(str[half_len]);
		half_len++;
	}
	_putchar('\n');
}
