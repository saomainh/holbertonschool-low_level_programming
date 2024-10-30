#include "main.h"

/**
 *print_triangle - it just prints the alphabet
 *@n : eofiefoezji
 *Description : /
 *Return:
 */

void print_triangle(int n)
{
	int i;
	int j;
	int x;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (x = n - i - 1; x > 0; x--)
			{
				_putchar(' ');
			}
			for (j = 0; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
