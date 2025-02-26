#include "main.h"

/*
 * File - 4-print_rev.c
 * Created by: Haidar Alessa 10682@holbertonstudents.com
 */

/**
 * print_rev - prints the given string in reverse
 * @s: is apointer that hold array of string
 */

void print_rev(char *s)
{
	int len = 0, index;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
