#include "main.h"
#include "stddef.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *factorial - finds the lenght of a string
 *@n : eafear
 * Description : /
 *Return: count
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
