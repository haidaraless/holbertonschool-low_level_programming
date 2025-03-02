#include "main.h"

/*
 * File - 0-strcat.c
 * Created by: Haidar Alessa 10682@holbertonstudents.com
 */

/**
 * _strcat - concatenates two strings,
 * @dest: a pointer to destination of concatenated string
 * @src: source of string to be concatenated
 * Return: a pointer to destination
 */

char *_strcat(char *dest, char *src)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 >= 0)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
