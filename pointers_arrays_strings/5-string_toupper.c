#include "main.h"

/**
 * string_toupper - change all lowercase of string
 * into uppercase
 * @str: string to be changed to uppercase
 * Return: updated string with uppercase
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
