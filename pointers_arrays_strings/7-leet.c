#include "main.h"
#include "stddef.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *reverse_array - finds the lenght of a string
 *@a : eafear
 *@n : dazd
 *Description : /
 *Return: count
 */

char *leet(char *s)
{
    int i, j;
    char leet[] = {'A', 'E', 'O', 'T', 'L', 'a', 'e', 'o', 't', 'l'};
    char leet_code[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (s[i] == leet[j])
                s[i] = leet_code[j];
        }
    }

    return s;
}
