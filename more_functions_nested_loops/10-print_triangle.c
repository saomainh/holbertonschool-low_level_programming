#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_triangle - Short description, single line
 * @size: aerfaer
 * Description: this is a description
 * Return: Description of the returned value
 */

void print_triangle(int size)
{
	int i, j, k;
	int size2 = size;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size2 - 1; j++)
		{
			_putchar(' ');
		}
		for (k = 0; k <= i; k++)
		{
			_putchar('#');
		}
		size2--;
		_putchar('\n');
	}
}
