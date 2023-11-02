#include "main.h"
/**
*  _strcmp - compares two strings
*@s1: first string
*@s2:second string
*Return:
*returns zero if s1 == s2
*returns negative number if s1 < s2
*returns positive number if s1 > s2
*/

int _strcmp(char *s1, char *s2)
{
	int k = 0, contrast = 0;

	while (1)
	{
	if (s1[k] == '\0' && s2[k] == '\0')
		break;
	else if (s1[k] == '\0')
	{
		contrast = s1[k];
		break;
	}
	else if (s2[k] == '\0')
	{
		contrast = s1[k];
		break;
	}
	else if (s1[k] != s2[k])
	{
		contrast = s1[k] - s2[k];
		break;
	}
	else
		k++;
	}
	return (contrast);
}
