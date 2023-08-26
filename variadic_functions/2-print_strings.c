#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_strings - prints all the words given.
  * @separator: the character that goes between the words
  * @n: Amount of numbers provided.
  * @...: next numbers.
  *
  * Return: Nothing.
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list words;
	unsigned int currWord;
	char *string;

	va_start(words, n);

	if (n == 0)
	{
		printf("\n");
	}

	for (currWord = 0 ; currWord < n ; currWord++)
	{
		string = va_arg(words, char *);

		if (string != NULL)
		{
			printf("%s", string);
		}
		else
		{
			printf("(nil)");
		}

		if (currWord == (n - 1))
		{
			printf("\n");
		}
		else if (separator != NULL)
		{
			printf("%s", separator);
		}
	}

	va_end(words);
}
