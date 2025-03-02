#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_line - Short description, single line
 * @n: qdef
 * Description: this is a description
 * Return: Description of the returned value
 */

void print_line(int n)
{
	int i;

	if (n >= 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
