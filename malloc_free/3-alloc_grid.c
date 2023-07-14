#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * alloc_grid - function
 * @width: width
 * @height: height
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **table;
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	table = malloc(sizeof(int *) * height);
	if (table == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		table[i] = malloc(sizeof(int *) * width);
		if (table[i] == NULL)
		{
			
			for (j = 0; j < i; j++)
			{
				free(table[j]);
			}
			free(table);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			table[i][j] = 0;
		}
	}
	return (table);
}
