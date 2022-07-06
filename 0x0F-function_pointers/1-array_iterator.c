#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @size: size of array
 * @array: array to be targeted
 * @action: function to be executed
 *
 * Description: executes a function given as a parameter
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !action)
		return;
	size_t i = -1;
	while (++i < size)
		action(array[i]);
}
