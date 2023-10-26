#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: pointer the string
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int result = 0;

	if (*s > '\0')
	{
		result += 1 +  _strlen_recursion(s + 1);
	}

	return (result);
}
