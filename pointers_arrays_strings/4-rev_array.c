#include "main.h"

/**
 * rev_array - reverse the elements of array
 * @a: the array to be reverse its elements
 * @n: represent number of elements in the array
 */

void rev_array(int *a, int n)
{
	int *temp[n];
	int i;

	for (i = n; i > 0; i--)
	{
		*temp[i] = *(a + i);
	}
}
