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
	int i;
	int first_digit;
	int last_digit;

	for (i = 0; i < 23; i++)
    {
		first_digit = i;
		if (first_digit > 10)
		{
			while (first_digit >= 10)
				{
					first_digit = first_digit / 10;
				}
		}
		last_digit = i % 10;
		putchar('0' + first_digit); 
		putchar('0' + last_digit);
		putchar('\n');
	}
}
