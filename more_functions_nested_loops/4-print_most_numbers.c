#include "main.h"

/*
 * File - 4-print_most_numbers.c
 * Created by: Haidar Alessa 10682@holbertonstudents.com
 */

/**
 * print_most_numbers - prints natural numbers without (2, 4) followed by new line
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n != 2 && n != 4)
			_putchar(n + '0');
	}

	_putchar('\n');
}
