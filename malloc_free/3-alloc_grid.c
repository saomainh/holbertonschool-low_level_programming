#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

/**
*_strdup - finds the lenght of a string
*@str : eafear
*Description : /
*Return: count
*/

int **alloc_grid(int width, int height)
{
    int **array;
    int i, x, k;

    if (width < 1 || height < 1)
    {
        return (NULL);
    }
    array = (int **)malloc(width * sizeof(int*));
    if (array == NULL)
    {
        return (NULL);
    }
    for (i = 0; i < height; i++)
    {
        array[i] = (int *)malloc(width * sizeof(int));
        if (array[i] == NULL)
        {
            for (k = 0; k > i; k++)
            {
                free(array[k]);
            }
            free(array);
            return (NULL);
        }
    }
    for (i = 0; i < height; i++)
    {
        for (x = 0; x < width; x++)
        {
            array[i][x] = 0;
        }
    }
    return(array);
}
