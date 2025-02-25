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
		int height, width;

		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
			{
				_putchar('#');
			}

			if (height == size - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
