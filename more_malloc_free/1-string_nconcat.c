#include <stdlib.h>

/**
 * str_length - calculate string length
 * @str: string to calculate its length
 * Return: an integer that represents length of the given string
 */

int str_length(char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;

	return (length);
}

/**
 * string_nconcat - concatenates two strings up to n bytes from s2.
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes from s2 to concatenate.
 *
 * Return: pointer to the new string or NULL if malloc fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int s1_length, s2_length, i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	s1_length = str_length(s1);
	s2_length = str_length(s2);

	if (n >= s2_length)
		n = s2_length;

	ptr = malloc(s1_length + n + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < s1_length; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n; j++)
		ptr[i + j] = s2[j];

	ptr[i + j] = '\0';

	return (ptr);
}
