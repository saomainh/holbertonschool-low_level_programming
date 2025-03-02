#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - Short description, single line
 * Description: this is a description
 * Return: Description of the returned value
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar ('0' + i);
		}
	}
	_putchar('\n');
}
