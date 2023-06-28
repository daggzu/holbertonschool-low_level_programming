#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swaps the value of int
 * @a: first int to be swapped
 * @b: second int to be swapped
 * Return: nothing
 */

void swap_int(int *a, int *b)

{
	int temp = *a;
	*a = *b;
	*b = temp;
}

