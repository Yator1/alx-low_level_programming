#include"main.h"
/**
 * print_numbers- prints a number from 0-9 followed by a number
 * Return: 0
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
