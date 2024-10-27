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

	if (n < 0)
	{
		n = -n;
	}
	last_digit = n % 10;
	_putchar(last_digit);
	return (last_digit);
}
