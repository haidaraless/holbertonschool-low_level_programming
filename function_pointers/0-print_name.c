#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints the given name using function pointer
 * @name: the name to be printed
 * @f: the function pointer used to print the name
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;

	if (f == NULL)
		return;

	f(name);
}
