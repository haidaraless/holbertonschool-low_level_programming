#include "main.h"

/*
 * File - 3-islower.c
 * Created by: Haidar Alessa 10682@holbertonstudents.com
 */

/**
 * _islower - checks if the given charachter is lowercase
 * @c: is the character is being checked
 * Return: 1 if the character is in lowercase, otherwise return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
