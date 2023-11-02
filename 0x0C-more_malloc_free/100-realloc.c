#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 * array contain all the values from min (included)
 * to max (included), ordered from min to max
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */
int *array_range(int min, int max)
{
	int *my_array;
	int i_count;

	if (min > max)
		return (NULL);

	my_array = malloc(sizeof(*my_array) * ((max - min) + 1));

	if (my_array == NULL)
		return (NULL);

	i_count = 0;
	while (min <= max)
	{
		my_array[i_count] = min;
		i_count++;
		min++;
	}

	return (my_array);
}
