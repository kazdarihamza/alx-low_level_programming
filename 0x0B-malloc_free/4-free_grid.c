#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_grid - frees memory
 *@height: height of grid
 *@grid: pointer to a grid
 */
 void free_grid(int **grid, int height)
 {
 	int i;
 
 	if (grid == NULL || grid == 0)
 		return;
 
 	for (i = 0; i < height; i++)
 	{
 		free(grid[i]);
 	}
 	free(grid);
 }
