#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 * integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 * Otherwise - a pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **two_d;
	int hgt_ind_count, widt_ind_count;

	if (width <= 0 || height <= 0)
		return (NULL);

	two_d = malloc(sizeof(int *) * height);

	if (two_d == NULL)
		return (NULL);

	for (hgt_ind_count = 0; hgt_ind_count < height; hgt_ind_count++)
	{
		two_d[hgt_ind_count] = malloc(sizeof(int) * width);

		if (two_d[hgt_ind_count] == NULL)
		{
			while (hgt_ind_count >= 0)
			{
				free(two_d[hgt_ind_count]);
				hgt_ind_count--;
			}

			free(two_d);
			return (NULL);
		}
	}

	hgt_ind_count = 0;
	while (hgt_ind_count < height)
	{
		widt_ind_count = 0;

		while (widt_ind_count < width)
		{
			two_d[hgt_ind_count][widt_ind_count] = 0;
			widt_ind_count++;
		}
		hgt_ind_count++;
	}
	return (two_d);
}
