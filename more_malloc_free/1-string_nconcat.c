#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: limit of s2
 * Return: pointer to new space in memory or null
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int o, k, v;
	int coun1 = 0;
	char *q;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (o = 0; s1[o] != '\0'; o++)
	{
		coun1 = coun1 + 1;
	}

	q = malloc(sizeof(*q) * (coun1 + n + 1));
	if (q == NULL)
	{
		return (NULL);
	}
	for (k = 0; s1[k] != '\0'; k++)
	{
		q[k] = s1[k];
	}
	for (v = 0; s2[v] != '\0' && v < n; v++, k++)
	{
		q[k] = s2[v];
	}
	q[k] = '\0';
	return (q);
}
