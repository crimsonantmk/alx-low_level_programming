#include <stdio.h>
#include "main.h"

/**
 * main - this prints arguments passed into main
 * @argc: represents number of command line arguments
 * @argv: indicates Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	printf("%s\n", argv[j]);

	return (0);
}
