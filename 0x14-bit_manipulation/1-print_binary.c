#include "main.h"

/**
* dec_to_bin- converts dec to binary
* @n: decimal input
* Return: void
*/
void dec_to_bin(unsigned long int n)
{
if (n == 0)
return;
dec_to_bin(n >> 1);
if ((n & 1) == 1)
_putchar('1');
if ((n & 1) == 0)
_putchar('0');
}
/**
* print_binary - converts decimal to binary and prints it
* @n: the decimal input
* Return: void
*/

void print_binary(unsigned long int n)
{
if (n == 0)
_putchar('0');
else
{
dec_to_bin(n);
}
}
