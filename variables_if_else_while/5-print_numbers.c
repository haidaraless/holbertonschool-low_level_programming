#include <stdio.h>

/*
 * File: 5-print_numbers.c
 * Created by: Haidar Alessa 10682@holbertonstudents.com
 */

/**
 * main - prints numbers
 * Return: 0
 */

int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		printf("%d", number);
	}

	printf("\n");

	return (0);
}
