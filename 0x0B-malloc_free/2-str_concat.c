#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: string to be added to.
 * @s2: string to add to s1.
 * Return: If concatenation fails - NULL.
 * Otherwise - a pointer to a newly allocated space in memory
 * which contains the contents of s1
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i_counter;
	int concat_index = 0;
	int len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i_counter = 0;
	while (s1[i_counter] || s2[i_counter])
	{
		len++;
		i_counter++;
	}

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	for (i_counter = 0; s1[i_counter]; i_counter++)
		concat_str[concat_index++] = s1[i_counter];

	i_counter = 0;
	while (s2[i_counter])
	{
		concat_str[concat_index++] = s2[i_counter];
		i_counter++;
	}

	return (concat_str);
}
