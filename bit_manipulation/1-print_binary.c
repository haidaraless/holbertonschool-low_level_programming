#include "main.h"

/**
* print_binary - prints the binary representation of a number.
* @n: the number to be converted and printed in binary.
*/
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int started = 0;

	mask = 1;
	while (mask <= n)
		mask <<= 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			started = 1;
		}
		else if (started)
			_putchar('0');
		mask >>= 1;
	}
}
