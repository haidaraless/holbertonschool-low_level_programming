#include "main.h"

/*
 * File - 0-strcat.c
 * Created by: Haidar Alessa 10682@holbertonstudents.com
 */

/**
 * _strcat - appends string to another string
 * @dest: pointer that holds result
 * @src: source of string
 * Return: a result of appending two strings
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
