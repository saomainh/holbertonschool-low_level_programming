#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_square - Short description, single line
 * @size: qdef
 * Description: this is a description
 * Return: Description of the returned value
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
