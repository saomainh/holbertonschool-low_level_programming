#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *array;
    unsigned int i;

    array = malloc(sizeof(*s1) - 1 + n * sizeof(unsigned int));
    if (array == NULL)
    {
        return(NULL);
    }

    /*copier string 1 dans l'array*/
    for(i = 0; i < sizeof(*s1); i++)
    {
        array[i] = s1[i];
        /*printf("step 1, %s", s1[i]);*/
    }

    /**
    *si n est plus grand ou égal à s2, utiliser tout s2
    *si n = NULL, s2 est une string vide
    */
    if (n > sizeof(*s2))
    {
        n = sizeof(*s2);
    }
    else if (n == 0)
    {
        /*ajouter le null byte à la fin + retourner array*/
        array[sizeof(*s1)] = '\0';
        return (array);
    }

    /*copier n 1ers bytes de s2*/
    for (i = 0; i < n; i++)
    {
        array[i + sizeof(*s1) - 1] = s2[i];
    }

    /*si n n'inclut pas le null byte, l'ajouter à la fin*/
    if (n != sizeof(*s2))
    {
        array[sizeof(*s1)] = '\0';
    }

    return (array);
}