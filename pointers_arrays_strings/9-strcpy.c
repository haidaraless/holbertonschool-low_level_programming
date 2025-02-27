#include <stdio.h>
#include "main.h"

/*
 * File - 9-strcpy.c
 * Created by: Haidar Alessa 10682@holbertonstudents.com
 */

/**
 * main - checks the code
 * @s1: a variable to hold string
 * @ptr: a pointer to destination
 * Return 0 Always
 *
 * _strcpy - copies string from source to destination
 * @dest: represents destination to copied string
 * @src: represents source from string to be copied
 * Return: a pointer to destination
 */

int main(void)
{
	char s1[98];
	char *ptr;

	ptr = _strcpy(s1, "First, solve the problem. Then, wire the code\n");
	printf("%s", s1);
	printf("%s", ptr);

	return (0);
}

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
