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

void reverse_array(int *a, int n)
{
    int i, j, temp;

    for (i = 0, j = n - 1; i < j; i++, j--)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}
