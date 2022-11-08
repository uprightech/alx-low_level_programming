#include "main.h"
/**
 * free_grid- free the grid in previous task
 * @grid : grid to be freed
 * @height : height of grid
 * Return: none
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);

}
