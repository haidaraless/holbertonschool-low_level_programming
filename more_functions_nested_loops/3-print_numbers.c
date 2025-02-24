#include "main.h"

/*
 * File - 3-print_numbers.c
 * Created by: Haidar Alessa 10682@holbertonstudents.com
 */

/**
 * print_numbers - prints natural numbers followed by new line
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		_putchar(n + '0');
	}

	_putchar('\n');
}
