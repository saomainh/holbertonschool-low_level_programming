#include <stdlib.h>
#include <stdio.h>
#include "main.h"


/**
 * print_alphabet - Short description, single line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 25; i++)
	    {
			_putchar('a' + i);
		}
		_putchar('\n');
	}
}
