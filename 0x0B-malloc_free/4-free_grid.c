#include "main.h"
/**
 * free_grid - a function that frees a 2 dimensional grid
 * previously created by your alloc_grid function
 * @grid: a two dimensional array of integers
 * @height: a number input
 * Return: always 0 (success)
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
