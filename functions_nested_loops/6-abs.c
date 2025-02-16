#include "main.h"

/*
 * File - 6-abs.c
 * Created by: Haidar Alessa 10682@holbertonstudents.com
 */

/**
 * _abs - computes the absolute value of an integer
 * @n: is the character is being checked
 * Return: 0 Always
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
