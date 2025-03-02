#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _isdigit - Short description, single line
 * @c: aeuca
 * Description: this is a description
 * Return: Description of the returned value
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
