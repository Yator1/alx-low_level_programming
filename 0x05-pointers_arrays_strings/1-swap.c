#include"main.h"
/**
 * swap_int - function that swaps values of two integers
 * @a: input integer pointer1
 * @b: input integer pointer2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int aSWb;

	aSWb = *a;
	*a = *b;
	*b = aSWb;
}
