#include "main.h"

/*
 * File - 2-strlen.c
 * Created by: Haidar Alessa 10682@holbertonstudents.com
 */

/**
 * _strlen - returns length of the given string
 * @s: is apointer that hold array of string
 * Return: number of characters of the given string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
