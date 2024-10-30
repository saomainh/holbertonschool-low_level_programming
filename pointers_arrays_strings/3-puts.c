#include "main.h"

/**
 *_puts - it just prints the alphabet
 *@str : eaofhezui
 *Description : /
 *Return: no return
 */

void _puts(char *str)
{
	int i = 0;
	int count = 0;

	while (str[i] != str[-1])
	{
		count++;
		i++;
	}
	for (i = 0; i <= count - 1; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
