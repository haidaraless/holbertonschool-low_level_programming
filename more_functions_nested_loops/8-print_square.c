#include "main.h"

/*
 * File - 8-print_square.c
 * Created by: Haidar Alessa 10682@holbertonstudents.com
 */

/**
 * print_square - prints a square with given size
 * @size: determine size of the square
 */

void print_square(int size)
{
	if (size > 0)
	{
		int row, column;

		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}

	_putchar('\n');
}
