#include "main.h"

/**
 *print_most_numbers - it just prints the alphabet
 *Description : /
 *Return: no return
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
