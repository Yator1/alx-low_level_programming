#include "main.h"
#include <stdio.h>
/**
 * main- prints number 0 - 100
 * for multiples of 3 it prints Fizz and
 * for multiples of 5 it prints Buzz
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf(" Buzz");
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			printf(" FizzBuzz");
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");

	return (0);
}
