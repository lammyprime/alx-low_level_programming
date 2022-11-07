#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function
 * @width: width
 * @height: height
 * Return: value
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **grid;
if (width <= 0 || height <= 0)
{
return (NULL);
}
grid = malloc(height * sizeof(int *));
if (grid == NULL)
{
free(grid);
return (NULL);
}
for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid == NULL)
{
free(grid[i]);
return (NULL);
}
for (j = 0; j < width; j++)
{
grid[i][j] = 0;
}
}
return (grid);
}
