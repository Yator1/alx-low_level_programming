#include <stdio.h>
#include "main.h"
/**
 * print_array- function that prints n elements of an array of integers
 * followed by anew line
 * @a: pointer to int
 * @n: input integer
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
	}
	_putchar('\n');
}
