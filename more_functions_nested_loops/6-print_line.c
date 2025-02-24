#include "main.h"

/*
 * File - 6-print_line.c
 * Created by: Haidar Alessa 10682@holbertonstudents.com
 */

/**
 * print_line - prints a line with given length
 * @n: number of times that prints _
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
