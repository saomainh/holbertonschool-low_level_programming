#include <stdlib.h>
#include <stdio.h>
#include "main.h"


/**
 * _isalpha - Short description, single line
 * @c : eaoeaijriae
 * Description: this is a description
 * Return: Description of the returned value
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
