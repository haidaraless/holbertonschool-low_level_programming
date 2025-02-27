#include "main.h"

/*
 * File - 5-rev_string.c
 * Created by: Haidar Alessa 10682@holbertonstudents.com
 */

/**
 * rev_string - prints  string in reverse
 * @s: a variable holds string to be inversed
 */

void rev_string(char *s)
{
	int count = 0, i, j;
	char *str, temp;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	str = s;

	for (i = 0; i < (count - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}
