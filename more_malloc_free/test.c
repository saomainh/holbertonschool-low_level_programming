#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *array;
    unsigned int i;
    int size1 = strlen(s1);
    int size2 = strlen(s2);

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
    for (i = 0; i < n; i++)
    {
        array[i + size1] = s2[i];
    }

    return (array);
}


int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}