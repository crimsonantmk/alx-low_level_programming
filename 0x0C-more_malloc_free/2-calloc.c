#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Function allocates memory for an array.
 * @nmemb: number of elements.
 * @size: size of bytes.
 * Return: pointer to the newly allocated memory.
 * if nmemb or size is 0, returns NULL.
 * if malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i_count;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	i_count = 0;
	while (i_count < (nmemb * size))
	{
		ptr[i_count] = 0;
		i_count++;
	}

	return (ptr);
}
