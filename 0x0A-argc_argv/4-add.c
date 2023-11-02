#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Takes in all integer arguments and returns the sum
 * @argc: Number of command line arguments
 * @argv: The Array name
 * Return: 1 if a non-integer passed in as arguments, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int m, n, length, add;
	char *p;

	if (argc < 2)
	printf("0\n");
	else
	{
		add = 0;
		for (m = 1; m < argc; m++)
		{
			p = argv[m];
			length = strlen(p);

			for (n = 0; n < length; n++)
			{
				if (isdigit(*(p + n)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			add += atoi(argv[m]);
		}

		printf("%d\n", add);
	}
	return (0);
}
