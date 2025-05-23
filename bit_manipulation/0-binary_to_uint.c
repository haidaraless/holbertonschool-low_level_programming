#include <stdio.h>
#include <stddef.h>
#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int.
* @b: a pointer to a string of '0' and '1' characters.
*
* Return: the unsigned integer value of the binary number, or
*         0 if the string contains any character other than '0' or '1',
*         or if the string is NULL.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result = result * 2 + (b[i] - '0');
	}

	return (result);
}

