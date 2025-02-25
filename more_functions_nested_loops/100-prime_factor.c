#include <stdio.h>

/*
 * File - 100-prime_factor.c
 * Created by: Haidar Alessa 10682@holbertonstudents.com
 */

/**
 * main - finds and prints the largest prime factor
 * of this number: 612852475143
 * Return: 0
 */

int main(void)
{
	long prime = 612852475143;
	long division;

	while (division < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}

		for (division = 3; division < (prime / 2); division += 2)
		{
			if ((prime % division) == 0)
				prime /= division;
		}
	}

	printf("%ld\n", prime);

	return (0);
}
