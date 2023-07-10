#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Returns the lenght of a string
 * @s: Point to the s
 *
 * Return: Lenght of string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion((s + 1)));
}
