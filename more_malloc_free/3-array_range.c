#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *array_range(int min, int max)
{
    int *array;
    int i;
    int x = min;

    if (min > max)
    {
        return (NULL);
    }

    array = malloc((max - min + 1) * sizeof(int));
    if (array == NULL)
    {
        return (NULL);
    }

    for(i = 0; i < max - min + 1; i++)
    {
        array[i] = x;
        x++;
    }

    return(array);

}