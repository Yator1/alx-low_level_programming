#include "main.h"
/**
* clear_bit - sets a bit at a given index to 1
* @n: pointer to the number to change
* @index: index of the bit to set to 1
* Return: 1 for success, -1 for failure
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int m;

if (index > sizeof(unsigned long int) * 8 || n == NULL)
return (-1);

m = 1;
m = m << index;
if (((*n >> index) & 1) == 1)
*n = m ^ *n;

return (1);
}
