#include "main.h"

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 *@size: Size of the array
 *@c: Character to insert
 *Return: NULL if size is zero or if it fails,
 *pointer to array if everything is normal.
 *FUNCTIONALITY *
 * 1. Check if the size is 0. If it is, we return NULL.
 * 2. Then, allocate memory for the array.
 * 3. If the allocation fails, return NULL.
 * 4. If allocation is succeeful, loop through the array
 * and set each element to the value of c.
 * 5. Finally, we return the array.
 * Time Complexity: O(n)
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i_counter;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	i_counter = 0;
	while (i_counter < size)
	{
		array[i_counter] = c;
		i_counter++;
	}

	return (array);
}
