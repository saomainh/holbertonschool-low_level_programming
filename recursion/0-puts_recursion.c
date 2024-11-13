#include "main.h"
#include "stddef.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_puts_recursion - finds the lenght of a string
 *@s : eafear
 *Description : /
 *Return: count
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
