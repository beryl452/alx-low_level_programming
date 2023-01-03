#include "search_algos.h"

/**
 * linear_search - search linearly
 * @array: given array of ints
 * @size: size of array
 * @value: value to search for
 * Return: index at which value's found
 */
int linear_search(int *array, size_t size, int value)
{
	if (array == null)
		return (-1);
	for (size_t i = 0; i < size; i++)
	{
		if (array[i] == value)
			return (i);
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	return (-1);
}

