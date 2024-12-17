#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

/**
*_strdup - finds the lenght of a string
*@str : eafear
*Description : /
*Return: count
*/

void free_grid(int **grid, int height)
{
    int i;
    for (i = 0; i < height; i++)
    {
        free(grid[i]);
    }
    free(grid);
}