#include "function_pointers.h"

/**
  * int_index - provides the values of the array to the given function.
  * @array: the array provided.
  * @size: size of the array.
  * @cmp: function that will use the code.
  *
  * Return: Nothing.
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int currVal, resultR;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (currVal = 0 ; currVal < size ; currVal++)
		{
			resultR = cmp(array[currVal]);
			if (resultR == 1)
			{
				return (currVal);
			}
		}
	}

	return (-1);
}
