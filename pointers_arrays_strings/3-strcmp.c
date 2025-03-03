#include "main.h"

/**
 * _strcmp - compares two strings
 * @dest: a pointer to destination
 * @src: a point to source of string
 * Return: 0 
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
