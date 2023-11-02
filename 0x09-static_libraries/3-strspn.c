#include "main.h"
/**
 * _strspn - search the number of bytes in the initial
 * segment of s which consist only of bytes from accept
 * @s:segment targeted
 * @accept:reference bytes container
 * Return:returns the number of bytes in the initial
 * segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int counter;

	while (*s)
	{
		for (counter = 0; accept[counter]; counter++)
		{
			if (accept[counter] == *s)
			{
				bytes++;
				break;
			}
			else if ((accept[counter + 1]) == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
