/*
 * File: 101-quote.c
 * Created by: Haidar Alessa 10682@holbertonstudents.com
 */

#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: 1
 */

int main(void)
{
	char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str1, 59);
	return (1);
}
