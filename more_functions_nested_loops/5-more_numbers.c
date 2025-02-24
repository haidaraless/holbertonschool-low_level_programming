#include "main.h"

/*
 * File - 5-more_numbers.c
 * Created by: Haidar Alessa 10682@holbertonstudents.com
 */

/**
 * more_numbers - prints numbers until 14, 10x times followed by new line
 */

void more_numbers(void)
{
	int i, n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 15; n++)
		{
			_putchar(n + '0');
		}
	}

	_putchar('\n');
}
