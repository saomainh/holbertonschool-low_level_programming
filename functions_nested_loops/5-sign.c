#include "main.h"

/**
 *print_sign - it just prints the alphabet x10
 *@n: letter to test
 *Description : /
 *Return: no return
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
