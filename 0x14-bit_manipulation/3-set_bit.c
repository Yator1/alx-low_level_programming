#include "main.h"
/**
* set_bit - a function that set bit to 1 at a given index
* @n: pointer to number to be searched
* @index: the index to be set
* Return: 1 successful or 0 fail
*/
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int high;

if (index > sizeof(unsigned int) * 8)
return (-1);
high = 1;
high = high << index;
*n = (*n | high);
return (1);
}
