#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created by alloc_grid
 * @grid: the 2D grid to be freed
 * @height: the height of the grid
 */
void free_grid(int **grid, int height)
{
if (grid == NULL || height <= 0)
return;
for (int i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
