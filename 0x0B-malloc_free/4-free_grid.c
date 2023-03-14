#include "main.h"
#include <stdlib.h>
/**
 * free_grid - two dimensional array free
 * @grid: two dimensional array to be freed
 * @height: height of array
 * Return: NULL
 */
void free_grid(int **grid, int height)
{
	int h;

	for (h = height; h >= 0; h--)
		free(grid[h]);
	free(grid);
}
