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

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y-1));
}
