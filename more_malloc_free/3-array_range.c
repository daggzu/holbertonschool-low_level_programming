#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum int in array
 * @max: maximum int in array
 * Return: pointer to array or null
 **/
int *array_range(int min, int max)
{
	int *p;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min;
	p = malloc(sizeof(*p) * (size + 1));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= size; i++, min++)
	{
		p[i] = min;
	}
	return (p);
}
