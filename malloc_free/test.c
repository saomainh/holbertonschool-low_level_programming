#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

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
    bool s2_null = false;

    while (*s1 != '\0')
    {
        if (s1 == NULL)
        {
            size = 0;
            break;
        }
        size++;
        s1++;
    }
    if (s2 == NULL)
    {
        size2 = 0;
        s2_null = true;
    }
    else
    {
        while (*s2 != '\0')
        {
            size2++;
            s2++;
        }
    }
    s1 -= size;
    s2 -= size2;
    size2 += 1;
    array = malloc((size + size2)* sizeof(char));
    if (array == NULL)
    {
        return (0);
    }
    for (i = 0; i < size; i++)
    {
        array[i] = s1[i];
    }
    if (!s2_null)
    {
        for (i = 0; i < size2; i++)
        {
            array[i + size] = s2[i];
        }
    }
    return (array);
}

int main()
{
    char s;
    s = str_concat("Hello", NULL);
    printf("%d", s);
    return (0);
}