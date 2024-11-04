#include "main.h"
#include "stddef.h"

/**
 *puts_half - it just prints the alphabet
 *@str : eaofhezui
 *Description : /
 *Return: no return
 */

void puts_half(char *str)
{
	int i = 0;
	int count = 0;

	while (str[i] != '\0')
	{
		count++;
		i++;
	}
	if (count % 2 == 0)
	{
		i = count / 2;
	}
	else
	{
		i = (count - 1) / 2;
	}
	if (i > 200)
	{
		i++;
	}

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
