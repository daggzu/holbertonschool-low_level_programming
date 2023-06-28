#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *  _strlen - Returns lenght of string
 * @s: THe string to get lenght of
 * Return: the length of @s
 */

int _strlen(char *s)

{
	size_t length = 0;

	while (*s++)
		length++;
	return (length);
}
