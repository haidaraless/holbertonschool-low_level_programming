#include <stdio.h>

/*
 * File: 2-print_alphabet.c
 * Created by: Haidar Alessa 10682@holbertonstudents.com
 */

/**
 * main - prints alphapets in lowercase and then in uppercase
 * Return: 0
 */

int main(void)
{
	char lower, upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}

	putchar('\n');

	return (0);
}
