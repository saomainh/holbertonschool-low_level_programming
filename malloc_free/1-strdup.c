#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*_strdup - finds the lenght of a string
*@str : eafear
*Description : /
*Return: count
*/

char *_strdup(char *str)
{
    int size = 0;
    char *array;
    int i;

    if (str == NULL)
    {
        return (NULL);
    }
    while (*str != '\0')
    {
        size++;
        str++;
    }
    str -= size;
    size += 1;
    array = malloc(size * sizeof(char));
    if (array == NULL)
    {
        return (NULL);
    }
    for (i = 0; i < size; i++)
    {
        array[i] = str[i];
    }
    return(array);
}