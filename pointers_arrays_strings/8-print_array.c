#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints elements of the array.
 * @a: An array of integres
 * @n: Is the number of elements to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
