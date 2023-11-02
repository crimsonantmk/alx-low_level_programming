#include "main.h"
/**
*_strncpy - C function that copies a string, including the
*terminating null byte, using an inputted number of bytes.
*If length of source string is less than the maximum byte number,
*Fill the remainder of the destination string with null bytes
*Works identical to the standard library function 'strncpy'.
*@dest: buffer storing the string copy
*@src:the source string
*@n:max number of byte copied
*Return: returns
*/

char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; k < n && src[k] != '\0'; k++)
		dest[k] = src[k];

	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}

	return (dest);
}
