#include <stdio.h>

/**
 * main - entry point
 * Return: always 0
 */

int main (void)
{
	char lowercase;

	for (lowercase = 'z'; lowercase <= 'a'; lowercase--)
	{
		putchar(lowercase);
	}
	putchar('\n');
	return (0);
}
