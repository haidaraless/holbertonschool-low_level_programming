#include "main.h"
#include <stdio.h>

/*
 * File - 9-main.c
 * Created by: Haidar Alessa 10682@holbertonstudents.com
 */

/**
 * main - checks the code
 * Return: 0 Always
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
