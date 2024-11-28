#include "main.h"
#include "stddef.h"
#include <stdio.h>
#include <stdlib.h>

/**
*factor_checker - finds the lenght of a string
*@n : eafear
*@i : adza
*  Description : /
*Return: count
*/

int factor_checker(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (i == n)
    {
		return (1);
	}
	else
	{
		if (n % i == 0)
		{
			return (0);
		}
	}

	return (factor_checker(n, i + 1));
}

/**
*is_prime_number - finds the lenght of a string
*@n : eafear
*  Description : /
*Return: count
*/

int is_prime_number(int n)
{
	int i = 2;

	return (factor_checker(n, i));
}
