#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_numbers - prints all the numers given.
  * @separator: the thing that goes between numbers.
  * @n: Amount of numbers provided.
  * @...: next numbers.
  *
  * Return: Nothing.
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int currNum;

	va_start(nums, n);

	if (n == 0)
	{
		printf("\n");
	}

	for (currNum = 0 ; currNum < n ; currNum++)
	{
		printf("%d", va_arg(nums, int));
		if (currNum == (n - 1))
		{
			printf("\n");
		}
		else if (separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(nums);
}
