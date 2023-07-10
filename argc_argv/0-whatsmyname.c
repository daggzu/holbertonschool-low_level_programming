#include <stdio.h>

/**
 * main - Prints the name followed by a new line
 * @argc: Number of the command line arguments
 * @argv: Array containing the command line arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
