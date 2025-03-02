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
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
		count++;

	while (count2 > n)
	{
		*(dest + count) = *(src + count2);

		if (*(src + count2) == '\0')
			break;

		count++;
		count2++;
	}

	return (dest);
}
