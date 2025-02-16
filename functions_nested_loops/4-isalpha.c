#include "main.h"

/*
 * File - 4-isalpha.c
 * Created by: Haidar Alessa 10682@holbertonstudents.com
 */

/**
 * _isalpha - checks if the given charachter is alphabitic
 * @c: is the character is being checked
 * Return: 1 if the character is in alphabitic, otherwise return 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
