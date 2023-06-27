#include "main.h"

/**
 * print_diagonal - Draws a diagonal line accordingly
 * @n: The number of times to print diagonal line
 * Return: empty
 */
void print_diagonal(int n)

{
	int x, y;

	if (n > 0)
	{
	_putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
	for (y = 0; y < n; y++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
	}
}
