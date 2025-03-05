#include "main.h"

/**
 * rot13 - encode string using ROT13
 * @str: string to be encoded
 * Return: encoded string
 */

char *rot13(char *str)
{
	int i, j;
	char alphabets[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13_chars[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alphabets[j] != '\0'; j++)
		{
			if (str[i] == alphabets[j])
			{
				str[i] = rot13_chars[j];
				break;
			}
		}
	}

	return (str);
}
