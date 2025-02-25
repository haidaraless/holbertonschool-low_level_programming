#include "main.h"

/*
 * File - 101-print_number.c
 * Created by: Haidar Alessa 10682@holbertonstudents.com
 */

/**
 * print_number - prints a number followed by new line
 * @n: integer number to be printed
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
