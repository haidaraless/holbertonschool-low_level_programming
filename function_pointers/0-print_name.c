#inclue "function_pointers.h"

/**
 * print_name - prints the given name using function pointer
 * @name: the name to be printed
 * @f: the function pointer used to print the name
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
