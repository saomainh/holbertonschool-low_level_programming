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

char *_strdup(char *str)
{
    int size = 0;
    char *array;
    int i;

    while (*str != '\0')
    {
        size++;
        str++;
    }
    str -= size;
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