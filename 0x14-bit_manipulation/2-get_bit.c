#include "main.h"
/**
* get_bit- function that returns the value of a bit
* at a given index
* @n: the integer
* @index: the index
* Return: the value of bit at the index
*/

int get_bit(unsigned long int n, unsigned int index)
{
unsigned int m;

if (index > sizeof(size_t) * 8)
return (-1);

for (m = 0; m < index; m++)
n = n >> 1;
return ((n & 1));
}
