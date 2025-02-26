#include "main.h"

/*
 * File - 3-puts.c
 * Created by: Haidar Alessa 10682@holbertonstudents.com
 */

/**
 * _puts - prints the given string
 * @str: is apointer that hold array of string
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
