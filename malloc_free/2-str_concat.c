#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*_strdup - finds the lenght of a string
*@str : eafear
*Description : /
*Return: count
*/

char *str_concat(char *s1, char *s2)
{
    int size = 0;
    int size2 = 0;
    char *array;
    int i;

    if (s1 == NULL || s2 == NULL)
    {
        return (NULL);
    }
    while (*s1 != '\0')
    {
        size++;
        s1++;
    }
    while (*s2 != '\0')
    {
        size2++;
        s2++;
    }
    s1 -= size;
    s2 -= size2;
    size2 += 1;
    array = malloc((size + size2)* sizeof(char));
    if (array == NULL)
    {
        return (NULL);
    }
    for (i = 0; i < size; i++)
    {
        array[i] = s1[i];
    }
    for (i = 0; i < size2; i++)
    {
        array[i + size] = s2[i];
    }
    return(array);
}
