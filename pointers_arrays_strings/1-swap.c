#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * swap_int - Short description, single line
 * @a: aerfaer
 * @b: dfear
 * Description: this is a description
 * Return: Description of the returned value
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
