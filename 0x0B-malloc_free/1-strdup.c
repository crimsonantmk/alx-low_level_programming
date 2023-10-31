#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: The string to be copied.
 * Return: If str == NULL or not enough memory is available
 * Else - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *copy;
	int i_counter;
	int len = 0;

	if (str == NULL)
		return (NULL);

	i_counter = 0;
	while (str[i_counter])
	{
		len++;
		i_counter++;
	}

	copy = malloc(sizeof(char) * (len + 1));

	if (copy == NULL)
		return (NULL);

	for (i_counter = 0; str[i_counter]; i_counter++)
		copy[i_counter] = str[i_counter];

	copy[len] = '\0';

	return (copy);
}
