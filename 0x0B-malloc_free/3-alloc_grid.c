#include "main.h"
/**
 * alloc_grid - a function that returns a pointer to a 2
 * dimensional array of integers
 * @width: a number input
 * @height: a number input
 * Return: a pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i = 0;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **) malloc(height * sizeof(int *));
	if (!grid)
		return (NULL);
	while (i < height)
	{
		grid[i] = (int *) malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			j = 0;
			while (j <= i)
			{
				free(grid[j]);
				j++;
			}
			free(grid);
			return (NULL);
		}
		j = 0;
		while (j < width)
			grid[i][j++] = 0;
		i++;
	}
	return (grid);
}
