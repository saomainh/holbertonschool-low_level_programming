#include "main.h"

/**
 *print_to_98 - bsolute value of a number
 *@n : first number to add
 *Description : /
 *Return: result
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n < 0)
		{
			n = -n;
			_putchar('-');
			_putchar(n + '0');
		}	
		if (n >= 10)
		{
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		else
		{
			_putchar(n + '0');
		}
		if (n < 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
	_putchar('\n');
}	
