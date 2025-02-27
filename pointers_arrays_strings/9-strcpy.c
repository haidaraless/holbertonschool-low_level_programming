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
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
