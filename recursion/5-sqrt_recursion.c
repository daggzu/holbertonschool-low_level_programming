#include "main.h"
#include <stdio.h>
/**
 * test_root - Tests for squares
 * @n: Number being evaluated
 * @i: Test values
 *
 * Return: Square root
 */
int test_root(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	return (test_root(n, i + 1));
}
/**
 * _sqrt_recursion - Goes to natural square root of a number
 * @n: Number being evaluated
 *
 * Return: Square root
 */
int _sqrt_recursion(int n)
{
	return (test_root(n, 1));
}
