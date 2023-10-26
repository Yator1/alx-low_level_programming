#include "main.h"
/**
 * get_bit - function that returns the bit value at a given index
 * @n: the number
 * @index: the index to be checked
 *
 * Return: the value of the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int max_index = sizeof(n) * 8 - 1;
	unsigned int mask;

	if (index >> max_index)
		return (-1);

	mask = 1u << index;
	return ((n & mask) >> index);
}
