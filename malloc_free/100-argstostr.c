#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program.
 * @ac: The number of arguments.
 * @av: The argument vector (array of strings).
 *
 * Return: a pointer to the new concatenated string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	str = malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, k++)
			str[k] = av[i][j];
		str[k] = '\n';
		k++;
	}

	str[k] = '\0';

	return (str);
}
