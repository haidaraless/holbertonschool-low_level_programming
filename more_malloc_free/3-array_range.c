#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max (inclusive).
 * @min: the minimum value.
 * @max: the maximum value.
 *
 * Return: a pointer to the newly created array or NULL if failure.
 */
int *array_range(int min, int max)
{
	int *arr;
	int size = max - min + 1, i;

	if (min > max)
		return (NULL);

	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; arr[i] = min + i, i++)
		;

	return (arr);
}
