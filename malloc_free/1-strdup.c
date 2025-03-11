#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: the string to be duplicated
 *
 * Return: a pointer of the duplicated string
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int length = 0;
	unsigned int index = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	ptr = malloc(sizeof(char) * length + 1);

	if (ptr == NULL)
		return (NULL);

	while (str[index] != '\0')
	{
		ptr[index] = str[index];
		index++;
	}

	return (ptr);
}
