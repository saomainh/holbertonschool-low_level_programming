#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * puts2 - Short description, single line
 * @str: aerfae
 * Description: this is a description
 * Return: Description of the returned value
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		if (*(str + 1) != '\0')
		{
			str += 2;
		}
		else
		{
			break;
		}
	}
	_putchar('\n');
}
