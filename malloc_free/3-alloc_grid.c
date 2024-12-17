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
    int i;
    int x;
    int k;

    if (width < 0 || height < 0)
    {
        return (NULL);
    }
    array = malloc(width * sizeof(int*));
    if (array == NULL)
    {
        return (NULL);
    }
    for (i = 0; i < width; i++)
    {
        array[i] = malloc(height * sizeof(int));
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
    for (i = 0; i < width; i++)
    {
        for (x = 0; x < height; x++)
        {
            array[i][x] = 0;
        }
    }
    return(array);
}
