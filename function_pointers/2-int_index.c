#include <stddef.h>

int int_index(int *array, int size, int (*cmp)(int))
{
    int i = 0;

    if (size <= 0 || array == NULL || cmp == NULL)
        return (-1);

    while (cmp(array[i]) == 0)
    {
        i++;
        if (i == size)
        {
            return(-1);
        }
    }

    return(i);
}