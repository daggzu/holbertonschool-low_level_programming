#include <stdio.h>

/**
 * main - entry point
 * Return: always 0
 */

int main(void)
{
	char lower, e, q;

	e = 'e';
	q = 'q';
	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower != e && lower != q)
		putchar(lower);
	}
	putchar('\n');
	return (0);
}



