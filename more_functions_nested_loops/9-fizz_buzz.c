#include <stdio.h>

/*
 * File - 9-fizz_buzz.c
 * Created by: Haidar Alessa 10682@holbertonstudents.com
 */

/**
 * main - prints numbers from 1 - 100,
 * for numbers multiples of 3, prints Fizz
 * for numbers multiples of 5, prints Buzz
 * for numbers multiples of both 3 & 5, prints FizzBuzz
 * Return: 0
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 3)
		{
			printf("Fizz");
		}
		else if (n % 5)
		{
			printf("Buzz");
		}
	}

	return (0);
}
