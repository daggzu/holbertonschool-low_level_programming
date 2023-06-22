#include <stdio.h>

/**
 * main - Entry point
 * Return: always 0
 */

int main(void)
{
	int s;

	for (s = 0; s < 10; s++)
	{
		putchar(s + '0');
	}
	putchar('\n');
	return (0);
}

