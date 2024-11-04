#include "main.h"

/**
 *_puts - it just prints the alphabet
 *@str : eaofhezui
 *Description : /
 *Return: no return
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
	    str = str + 2;	
	}
	_putchar('\n');
}
