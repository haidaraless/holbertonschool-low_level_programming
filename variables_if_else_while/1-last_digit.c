#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * File: 1-last_digit.c
 * Created by: Haidar Alessa 10682@holbertonstudents.com
 */

/**
 * main - Prints what ever the last digit of a random number is greater, less, or equals to 5
 * Return: 0
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	}
	else if (last == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last);
	}
	return (0);
}
