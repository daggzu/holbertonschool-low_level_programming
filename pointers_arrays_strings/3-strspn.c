#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - The Prototype for the substring lenght
 * @s: String getting eval
 * @accept: Gives the bytes
 * Return: void
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i]; ++i)
	{
		for (j = 0; accept[j]; ++j)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j] == '\0')
			break;
	}
	return (i);
}

