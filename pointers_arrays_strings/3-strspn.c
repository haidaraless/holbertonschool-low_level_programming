#include "main.h"

/**
 * _strspn - calculate length of a prefix substring.
 * @s: pointer to the string to search.
 * @accept:pointer to the string containing accepted characters.
 *
 * Return: number of bytes in the initial segment of `s`
 *         which consist only of bytes from `accept`.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;
	char *a;

	while (*s)
	{
		found = 0;
		a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
			a++;
		}

		if (!found)
			break;

		count++;
		s++;
	}

	return (count);
}
