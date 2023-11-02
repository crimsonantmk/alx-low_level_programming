#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - takes two integer arguments and prints the product
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if no arguments passed in, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int m, n;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n = 1;

		for (m = 1; m < 3; m++)
		n *= atoi(argv[m]);

		printf("%d\n", n);
	}

	return (0);
}
