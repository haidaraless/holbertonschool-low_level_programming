#include "main.h"

/*
 * File - 7-print_diagonal.c
 * Created by: Haidar Alessa 10682@holbertonstudents.com
 */

/**
 * print_diagonal - prints a diagonal line with given length
 * @n: number of times that prints diagonal
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int length, space;

		for (length = 0; length < n - 1; length++)
		{
			for (space = 0; space < length; space++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}

	_putchar('\n');
}
