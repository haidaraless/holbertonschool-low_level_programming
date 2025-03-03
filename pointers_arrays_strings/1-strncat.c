#include "main.h"

/**
 * _strncat - concatenate strings
 * @dest: a pointer to destination concatenated string
 * @src: a point to source of string
 * @n: amount of bytes used from source
 * Return: a pointer to destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
