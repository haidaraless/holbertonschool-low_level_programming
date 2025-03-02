#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random password
 * Return: 0 Always
 */

int main(void)
{
	int r = 0;
	int i = 0;
	time_t t;

	srand((unsigned int) time(&t));

	while (i < 2772)
	{
		r = rand() % 128;

		if ((i + r) > 2772)
			break;
		i = i + r;

		printf("%c", r);
	}

	printf("%c\n", (2772 - i));

	return (0);
}
