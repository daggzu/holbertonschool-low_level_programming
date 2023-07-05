#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - Function that locates the first occurrence in the string
 *  @accept: Need to matches its bytes
 *  @s: To the pointer
 *  Return: void
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}

			b++;
		}

		a++;
	}

	return ('\0');
}
