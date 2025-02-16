#include "main.h"

/*
 * File - 1-alphabet.c
 * Created by: Haidar Alessa 10682@holbertonstudents.com
 */

/**
 * print_alphabet - prints alphabets in lowercase
 * Return: 0
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');
}
