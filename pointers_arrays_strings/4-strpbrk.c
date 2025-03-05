#include "main.h"

/**
 * _strpbrk - searches within a string
 * @s: pointer to the string to be searched.
 * @accept: pointer to the string containing bytes to search for.
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 *         or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
		a = accept;
		while (*a)
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}

	return (NULL);
}
