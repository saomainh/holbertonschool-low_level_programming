#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Short description, single line
 * Description: this is a description
 * Return: Description of the returned value
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar('0' + (j / 10));
			}
		    _putchar('0' + (j % 10));
		}
		_putchar('\n');
	}
}
