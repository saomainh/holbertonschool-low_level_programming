#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *array;
    unsigned int unsigned_i;
    int i;
    int size1 = strlen(s1);
    unsigned int size2 = strlen(s2);

    array = malloc(size1 + 1 + n);
    if (array == NULL)
    {
        return(NULL);
    }

    /*copier s1*/
    for(i = 0; i < size1 + 1; i++)
    {
        array[i] = s1[i];
    }

     /**
    *si n est plus grand ou égal à s2, utiliser tout s2
    *si n = NULL, s2 est une string vide
    */
    if (n > size2 + 1)
    {
        n = size2 + 1;
    }
    else if (n == 0)
    {
        /*ajouter le null byte à la fin + retourner array*/
        array[size1+1] = '\0';
        return (array);
    }

    /*copier n 1ers bytes de s2*/
    for (unsigned_i = 0; unsigned_i < n; unsigned_i++)
    {
        array[unsigned_i + size1] = s2[unsigned_i];
    }

    return (array);
}