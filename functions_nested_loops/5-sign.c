#include "main.h"

/**
 * print_sign - Prints the sifn of a number
 * @n: The number to be checked i think
 * Return: 1 for posotitve output, -1 for negative output 0 anythung else
 */

int print_sign(int n)

{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}

