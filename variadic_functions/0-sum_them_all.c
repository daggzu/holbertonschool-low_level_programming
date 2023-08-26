#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * sum_them_all - sums all the numers given.
  * @n: Amount of numbers provided.
  * @...: next numbers.
  *
  * Return: Nothing.
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int currNum, ResuT = 0;

	va_start(nums, n);

	for (currNum = 0 ; currNum < n ; currNum++)
	{
		ResuT += va_arg(nums, int);
	}

	va_end(nums);
	return (ResuT);
}
