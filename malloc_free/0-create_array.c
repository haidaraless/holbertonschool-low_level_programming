#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of specefic character
 * @size: size to be allocated in memory
 * @c: character to be stored in the array
 *
 * Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	size_t i;

	/* Return NULL if size is zero */
	if (size == 0)
		return (NULL);

	/* Allocate memory for the array */
	arr = malloc(size * sizeof(char));

	/* Return NULL if memory allocation was fail */
	if (arr == NULL)
		return (NULL);

	/* Initialize the array with the specified character */
	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
