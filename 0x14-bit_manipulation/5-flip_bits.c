#include "main.h"
/**
* flip_bits - counts the number of bits to change
* to get from one number to another
* @n: first number
* @m: second number
* Return: number of bits to change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int count;
unsigned long int result = n ^ m;

for (count = 0; result > 0;)
{
if ((result & 1) == 1)
count++;
result = result >> 1;
}
return (count);
}
