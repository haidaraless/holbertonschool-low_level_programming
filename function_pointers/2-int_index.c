#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - returns the first element's index for which
 * cmp (function pointer) does not return 0
 * @array: an array of integers to be compared
 * @size: size of array
 * @cmp: a function pointer that accepts a compare function
 * Return: -1 for any unmatch, and if the size of array is equals to zero,
 * the index of matches elements
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
		return (-1);

	if (cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
