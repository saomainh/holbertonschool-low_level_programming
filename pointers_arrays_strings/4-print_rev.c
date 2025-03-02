#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_rev - Short description, single line
 * @str: aerfae
 * Description: this is a description
 * Return: Description of the returned value
 */

void print_rev(char *str)
{
	int count;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	while (count >= 0)
	{
		_putchar(*str);
		str--;
		count--;
	}
	_putchar ('\n');
}
