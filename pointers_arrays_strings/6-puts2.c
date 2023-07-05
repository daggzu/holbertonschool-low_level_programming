#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character
 * @str: String to be treated
 *
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			putchar(str[i]);
		i++;
	}
	putchar('\n');
}
