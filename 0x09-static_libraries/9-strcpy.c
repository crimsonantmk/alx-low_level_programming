#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int el = 0;
	int ex = 0;

	while (*(src + el) != '\0')
	{
		el++;
	}
	for ( ; ex < el ; ex++)
	{
		dest[ex] = src[ex];
	}
	dest[el] = '\0';
	return (dest);
}
