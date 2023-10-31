#include "main.h"
/**
* argstostr - a function that concatenates all the arguments of your program
*@ac: count of args passed to the function
*@av:array of arguments
*
*Return: pointer to the new string
*/

char *argstostr(int ac, char **av)
{
		char *new_string = NULL;
		int k = 0;
		int index = ac, n;
		int add = 0;
		int temp_store = 0;

		if (ac == 0 || av == NULL)
			return (NULL);

		while (ac--)
			add += (len(av[ac]) + 1);
		new_string = (char *) malloc(add + 1);

		if (new_string != NULL)
		{
			while (k < index)
			{
				n = 0;
				while (av[k][n] != '\0')
				{
					new_string[n + temp_store] = av[k][n];
					n++;
				}

				new_string[temp_store + n] = '\n';
				temp_store = temp_store + (n + 1);
				k++;
			}
			new_string[temp_store] = '\0';
		}
		else
		{
			return (NULL);
		}
		return (new_string);
}

/**
*len - returns length of str
*@str: the counted str
*Return: returns the length
*/
int len(char *str)
{
		int len = 0;

		if (str != NULL)
		{
			while (str[len])
				len++;
		}
	return (len);
}
