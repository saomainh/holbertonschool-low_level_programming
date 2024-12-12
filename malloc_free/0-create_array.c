#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*create_array - finds the lenght of a string
*@size : eafear
*@c : jkbkjk
*Description : /
*Return: count
*/

char *create_array(unsigned int size, char c)
{
    char *array;
    unsigned int i;

    if (size == 0)
    {
        return (NULL);
    }
    array = malloc(size * sizeof(char));
    for (i = 0; i < size; i++)
    {
        array[i] = c;
    }
    if (array == NULL)
    {
        return (NULL);
    }

    return(array);
}