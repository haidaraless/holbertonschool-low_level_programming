#include "main.h"

/**
 * _strncpy - copies string unit n character
 * @dest: a pointer to destination
 * @src: a point to source of string
 * @n: amount of characters to be copied
 * Return: a pointer to destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
