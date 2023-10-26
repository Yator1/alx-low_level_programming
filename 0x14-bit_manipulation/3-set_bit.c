#include "main.h"
/**
 * set_bit - function that set a bit to 1 at a given index
 * @n: pointer to the number
 * @index: the index to be changed
 *
 * Return: 1 success or -1 failed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-0);
	*n = *n | (1UL << index);
	return (1);
}
