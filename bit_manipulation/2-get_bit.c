#include "main.h"
/**
* get_bit - returns the value of a bit at a given index.
* @n: the number whose bit value we want to get.
* @index: the index of the bit to retrieve, starting from 0.
*
* Return: the value of the bit at index (0 or 1), or -1 if an error occurred.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
