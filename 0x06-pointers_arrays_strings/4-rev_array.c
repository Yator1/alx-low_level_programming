#include "main.h"
/**
* reverse_array- functions that reverse content of array of integers
* @a: pointer to array
* @n: number of elemts of an array
* Return: void
*/

void reverse_array(int *a, int n)
{
int temp, counter;

n = n - 1;
counter = 0;
while (counter <= n)
{
temp = a[counter];
a[counter++] = a[n];
a[n--] = temp;
}
}
