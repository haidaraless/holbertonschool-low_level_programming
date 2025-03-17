#include "function_pointers.h"

/**
 * array_iterator - iterate through each element in an array,
 * and perform a passed function.
 * @array: an integer array used to perform function on it
 * @size: size of array, (number of elements)
 * @action: a function pointer to accept function used to
 * perform it to the given array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
