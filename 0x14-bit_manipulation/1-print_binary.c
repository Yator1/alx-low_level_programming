#include "main.h"
/**
 * print_binary - function that prints binary rep of a num
 * @n: the number
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int bitSize = 64;
	unsigned int mask = 1u << (bitSize - 1);
	int print = 0;

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			print = 1;
		}
		else if (print)
		{
			_putchar('0');
		}

		mask >>= 1;
	}
	if (!print)
		_putchar('0');
}
