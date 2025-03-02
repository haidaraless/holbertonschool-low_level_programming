#include "main.h"

/**
 * _strcat - concatenates two strings,
 * @dest: a pointer to destination of concatenated string
 * @src: source of string to be concatenated
 * Return: a pointer to destination
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr)
		ptr++;

	while (*src)
		*ptr++ = *src++;

	*ptr = '\0';

	return (dest);
}
