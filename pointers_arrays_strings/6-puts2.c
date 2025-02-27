#include "main.h"

/*
 * File - 6-puts2.c
 * Created by: Haidar Alessa 10682@holbertonstudents.com
 */

/**
 * puts2 - prints every character of a string
 * @str: a variable that holds string to be print all
 * its character
 */

void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}

		if (count % 2 == 0)
			_putchar(str[count]);

		count++;
	}
}
