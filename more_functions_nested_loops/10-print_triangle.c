#include "main.h"

/*
 * File - 10-print_triangle.c
 * Created by: Haidar Alessa 10682@holbertonstudents.com
 */

/**
 * print_triangle - prints a triangle with given size
 * @size: determine size of the triangle
 */

void print_triangle(int size)
{
	if (size > 0)
	{
		int hash, index;

		for (hash = 1; hash <= size; hash++)
		{
			for (index = size - hash; index < size; index--)
				_putchar(' ');

			for (index = 0; index < hash; index++)
				putchar('#');


			if (hash == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
