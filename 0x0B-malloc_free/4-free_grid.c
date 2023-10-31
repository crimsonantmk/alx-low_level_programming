#include "main.h"

/**
*free_grid - frees 2d array
*@grid: The memory block to be freed
*@height:The height of the array
*Return: returns void
*/

void free_grid(int **grid, int height)
{
	int index;

	index = 0;
	while (index < height)
	{
		free(grid[index]);
		index++;
	}

	free(grid);
}
