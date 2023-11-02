#include "main.h"
/**
 * _strchr - Returns a pointer to the first occurrence
 * of the character c in the string s, or NULL if the
 * character is not found
 * @s:string targeted
 * @c:character targeted
 * Return: returns pointer to first occcurence of c
 */
char *_strchr(char *s, char c)
{
	int counter;

	counter = 0;

	while ((s[counter] != c) && (s[counter] != '\0'))
	{
		counter++;
	}
	if (s[counter] == c)
	{
		return (s + counter);
	}
	else
	{
		return (NULL);
	}
}
