#include "main.h"

/**
 *print_last_digit - bsolute value of a number
 *@n: number  to test
 *Description : /
 *Return: absolute value of n
 */

int print_last_digit(int n)
{
	int last_digit;
	int buffer;

	if (n < 0)
	{
		n++;
		n = -n;
		buffer = 1;
	}
	else
	{
		buffer = 0;
	}

	last_digit = (n % 10) + buffer;
	_putchar(last_digit + '0');
	return (last_digit);
}
