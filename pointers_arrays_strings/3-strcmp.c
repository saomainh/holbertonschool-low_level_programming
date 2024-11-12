#include "main.h"
#include "stddef.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strcmp - finds the lenght of a string
 *@s1 : eafear
 *@s2 : 
 *Description : /
 *Return: count
 */

int _strcmp(char *s1, char *s2)
{
    int i;

    for (i = 0; s1[i] == s2[i] && s1[i] != '\0'; i++);
    return s1[i] - s2[i];
}
