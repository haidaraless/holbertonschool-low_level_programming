#include <stdio.h>
#include "main.h"

/*
 * File - 9-strcpy.c
 * Created by: Haidar Alessa 10682@holbertonstudents.com
 */

/**
 * _strcpy - copies string from source to destination
 * @dest: represents destination to copied string
 * @src: represents source from string to be copied
 * Return: a pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;

		count++;
	}

	return (dest);
}
