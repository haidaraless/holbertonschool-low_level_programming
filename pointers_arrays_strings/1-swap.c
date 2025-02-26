#include "main.h"

/*
 * File - 1-swap.c
 * Created by: Haidar Alessa 10682@holbertonstudents.com
 */

/**
 * swap_int - swap values of two integers
 * @a: is a pointer to first value
 * @b: is a pointer to second value
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
