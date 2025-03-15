#include "main.h"
#include <stdlib.h>

/**
 * str_length - calculate string length
 * @str: string to calculate its length
 * Return: an integer that represents length of the given string
 */

int str_length(char *str)
{
	unsigned int length = 0;

	while (str[length] != '\0')
		length++;

	return (length);
}

/**
 * str_concat - concatenates two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 *
 * Return: a pointer of the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, s1_length, s2_length;

	if (s1 != NULL)
		str_length(s1);

	if (s2 == NULL)
		str_length(s2);

	ptr = malloc(sizeof(char) * (s1_length + s2_length + 1));

	if (ptr == NULL)
		return (NULL);

	/* Concatencation logic here  */
	for (i = 0; i < s1_length; i++)
		ptr[i] = s1[i];

	for (j = 0; j < s2_length; j++)
		ptr[i + j] = s2[j];

	ptr[i + j] = '\0';
	return (ptr);
}
