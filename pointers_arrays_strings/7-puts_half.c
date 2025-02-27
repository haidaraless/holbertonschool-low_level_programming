#include "main.h"

/*
 * File - 7-puts_half.c
 * Created by: Haidar Alessa 10682@holbertonstudents.com
 */

/**
 * puts_half - prints half of a string
 * @str: a variable that holds string to be print half
 * of its characters
 */

void puts_half(char *str)
{
	int count = 0;
	int index;

	while (count >= 0)
	{
		if (str[count] == '\0')
			break;

		count++;
	}

	if (count % 2 == 1)
		index = count / 2;
	else
		index = (count - 1) / 2;

	for (index++; index < count; index++)
		_putchar(str[index]);

	_putchar('\n');
}
