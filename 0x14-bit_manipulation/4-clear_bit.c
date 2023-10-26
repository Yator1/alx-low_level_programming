#include "main.h"
/**
 * clear_bit - function that changes the bit value to 0  at an index
 * @n: pointer to the number
 * @index: the index to be changed
 *
 * Return: 1 worked or -1 failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= *n ^ (1ul << index);
	return (1);
}
