#include "main.h"
#include "stddef.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 *print_diagsums - finds the lenght of a string
 *@a : eafear
 *@size : .
 *Description : /
 *Return: count
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}
			printf("%d, %d\n", sum1, sum2);
}
