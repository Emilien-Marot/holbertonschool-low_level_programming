#include "main.h"
#include <stdlib.h>

/**
 * free_grid - blabla
 *
 * @grid: abc
 * @height: def
 *
 * Description: blabla
 * Return: blabla
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
