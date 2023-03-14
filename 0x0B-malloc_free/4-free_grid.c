#include <stdlib.h>
/**
 * free_grid - frees a 2d grid previously created by malloc
 * @grid: a pointer to the first array in the grid
 * @height: the grid height
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int idx = 0;

	while (idx < height)
	{
		free(grid[idx]);
		idx++;
	}
	free(grid);
}
