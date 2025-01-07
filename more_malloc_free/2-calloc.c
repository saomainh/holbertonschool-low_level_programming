#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
    char *array;

    if (nmemb == 0 || size == 0)
    {
        return (NULL);
    }
    array = malloc(nmemb * size);

    if (array == NULL)
    {
        return (NULL);
    }

    return(array);
}