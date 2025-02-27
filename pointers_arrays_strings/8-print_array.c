#include <stdio.h>

/*
 * File - 8-print_array.c
 * Created by: Haidar Alessa 10682@holbertonstudents.com
 */

/**
 * print_array - prints a given number (array) of integers
 * @a: array of integers
 * @n: number of elements to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));

		if (i != (n - 1))
			printf(", ");
	}

	printf("\n");
}
