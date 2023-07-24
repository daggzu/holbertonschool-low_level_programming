#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Print the name
 * @name: Name of the person
 * @f: Pointer to function
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
