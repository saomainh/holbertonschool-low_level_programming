#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count(char *string)
{
    int size = 0;

    if (string == NULL)
    {
        size = 0;
    }
    else
    {
        while (*string != '\0')
        {
            size++;
            string++;
        }
    }

    string -= size;
    return (size);
}

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *array;
    unsigned int unsigned_i;
    int i;
    int size1 = count(s1);
    unsigned int size2 = count(s2);

    array = malloc((size1 + n + 1) * sizeof(char));

    if (array == NULL)
    {
        return(NULL);
    }

    /*si s1 et s2 sont null return un tableau vide*/
    if (s1 == NULL && s2 == NULL)
    {
        array[0] = '\0';
        return(array);
    }

    /*si s1 est null, ajouter directement n 1ers bytes de s2 et return*/
    if (s1 == NULL)
    {
        for (unsigned_i = 0; unsigned_i < n; unsigned_i++)
        {
            array[unsigned_i] = s2[unsigned_i];
        }
        array[n] = '\0';
        return (array);
    }

    /*copier s1*/
    for(i = 0; i < size1; i++)
    {
        array[i] = s1[i];
    }

     /**
    *si n est plus grand ou égal à s2, utiliser tout s2
    *si n = 0, ou si size2 est null, return array contenant s1
    */
    if (n > size2)
    {
        n = size2;
    }
    else if (n == 0 || s2 == NULL)
    {
        array[size1] = '\0';
        return (array);
    }

    /*copier n 1ers bytes de s2*/
    for (unsigned_i = 0; unsigned_i < n; unsigned_i++)
    {

        array[unsigned_i + size1] = s2[unsigned_i];
    }

    /*adding null terminator*/
    array[size1 + n] = '\0';

    return (array);
}