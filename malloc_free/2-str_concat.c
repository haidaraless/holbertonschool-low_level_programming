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
	int s1_length = 0;
	int s2_length = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	ptr = malloc(sizeof(char) * s1_length + sizeof(char) * s2_length);

	if (ptr == NULL)
		return (NULL);

	/* Concatencation logic here  */
	while

	return (ptr);
}
