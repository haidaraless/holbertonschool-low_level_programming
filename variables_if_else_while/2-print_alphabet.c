#include <stdio.h>

/*
 * File: 2-print_alphabet.c
 * Created by: Haidar Alessa 10682@holbertonstudents.com
 */

/**
 * main - prints alphapetc in lower case
 * Return: 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
