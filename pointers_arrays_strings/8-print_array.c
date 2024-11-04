#include "main.h"
#include "stddef.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_array - it just prints the alphabet
 *@a : eaofhezui
 *@n : efezfez
 *Description : /
 *Return: no return
 */

void print_array(int *a, int n)
{
	int i;
	int element;

	for (i = 0; i < n; i++)
	{
		element = a[i];
		printf("%d", element);
		if (i != n - 1)
	    {
			printf(", ");
		}
	}
	printf("\n");
}
