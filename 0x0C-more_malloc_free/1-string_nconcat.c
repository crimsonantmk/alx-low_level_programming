#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * If the function fails, it should return NULL
 * @s1: first string.
 * @s2: second string.
 * @n: amount of bytes.
 *
 * Return: pointer to the newly allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_mem;
	unsigned int lst1, lst2, lstout, i_count;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	lst1 = 0;
	while (s1[lst1] != '\0')
	{
		lst1++;
	}
	for (lst2 = 0; s2[lst2] != '\0'; lst2++)
		;
	if (n > lst2)
		n = lst2;
	lstout = lst1 + n;
	new_mem = malloc(lstout + 1);
	if (new_mem == NULL)
		return (NULL);
	i_count = 0;
	while (i_count < lstout)
	{
		if (i_count < lst1)
		{
			new_mem[i_count] = s1[i_count];
		}
		else
			new_mem[i_count] = s2[i_count - lst1];
		i_count++;
	}
	new_mem[i_count] = '\0';
	return (new_mem);
}
