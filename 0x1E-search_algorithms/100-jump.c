#include <math.h>
#include "search_algos.h"

/**
 * jump_search- a function that searches for a value in a sorted array of
 * integers using the Jump search algorithm.
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located,
 * -1, If value is not present in array or if array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	int blocksize, start;
	size_t end, j;

	blocksize = sqrt(size);
	start = 0;
	end = blocksize;

	if (array == NULL || size == 0)
		return (-1);
	printf("Value checked array[%d] = [%d]\n", start, array[start]);
	while (array[end] <= value && end < size)
	{
		printf("Value checked array[%ld] = [%d]\n", end, array[end]);
		start = end;
		end += blocksize;
	}

	if (end >= size)
		end = size - 1;

	printf("Value found between indexes [%d] and [%ld]\n", start, end);
	for (j = start; j <= end; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
