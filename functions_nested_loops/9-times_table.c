#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * times_table - Short description, single line
 * Description: this is a description
 * Return: Description of the returned value
 */

void times_table(void)
{
	int i;
	int j;
	int first_digit;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (i * j < 10)
				{
					_putchar(' ');
				}
			}
			first_digit = i * j;
			if (first_digit >= 10)
			{
				while (first_digit >= 10)
				{
					first_digit /= 10;
				}
				_putchar('0' + first_digit);
			}
			_putchar('0' + (i * j)  % 10);
		}
		_putchar('\n');
	}
}
