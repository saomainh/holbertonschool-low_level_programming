#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - Short description, single line
 * Description: this is a description
 * Return: Description of the returned value
 */

void jack_bauer(void)
{
	int i, j, first_digit, last_digit;

	for (j = 0; j <= 23; j++)
	{
		for (i = 0; i <= 59; i++)
		{
			if (j < 10)
			{
				first_digit = 0;
			}
			else
			{
				first_digit = j;
				while (first_digit >= 10)
				{
					first_digit /= 10;
				}
			}
			putchar('0' + first_digit);
			putchar('0' + j % 10);
			putchar(':');
			if (i < 10)
			{
				first_digit = 0;
			}
			else
			{
				first_digit = i;
				while (first_digit >= 10)
				{
					first_digit /= 10;
				}
			}
			last_digit = i % 10;
			putchar('0' + first_digit);
			putchar('0' + last_digit);
			putchar('\n');
		}
	}
}
