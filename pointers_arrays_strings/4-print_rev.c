#include "main.h"

/*
 * File - 4-print_rev.c
 * Created by: Haidar Alessa 10682@holbertonstudents.com
 */

/**
 * print_rev - prints the given string in reverse
 * @s: is a pointer that hold array of string
 */

void print_rev(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}

	for (count--; count >= 0; count--)
		_putchar(s[count]);

	_putchar('\n');
}
