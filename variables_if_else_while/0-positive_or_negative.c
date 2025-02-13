#include <stdlib.h>
#include <time.h>


/**
 * main - Determine if the randow number is positive of negative
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("Number %d is positive\n", n);
	}
       	else if (n < 0)
	{
		printf("Number %d is negative\n", n);
	}
       	else
	{
		printf("%d is zeron\n", &n);
	}
	return (0);
}
