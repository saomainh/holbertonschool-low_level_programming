#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _puts - Short description, single line
 * @str: aerfae
 * Description: this is a description
 * Return: Description of the returned value
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
