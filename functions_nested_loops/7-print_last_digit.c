#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Short description, single line
 * @n : eaoeaijriae
 * Description: this is a description
 * Return: Description of the returned value
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n++;
		n = -n;
		n = n % 10;
		n++;
	}
	else
	{
		n = n % 10;
	}
	_putchar('0' + n);
	return (n);
}
