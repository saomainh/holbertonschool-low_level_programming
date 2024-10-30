#include "main.h"

/**
 *print_rev - it just prints the alphabet
 *@s : eaofhezui
 *Description : /
 *Return: no return
 */

void print_rev(char *s)
{
	int i = 0;
	int count = 0;

	while (s[i] != s[-1])
	{
		count++;
		i++;
	}
	for (i = count - 1; i > 0 - 1; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
