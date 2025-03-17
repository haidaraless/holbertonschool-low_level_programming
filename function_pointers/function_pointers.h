#include <stddef.h>
#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/*
 * File: function_pointers.h
 * Created by: Haidar Alessa 10682@holbertonstudents.com
 * Desc: A Header file contains all prototype functions
 */

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
