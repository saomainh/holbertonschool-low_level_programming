#include "main.h"
#include "stddef.h"
/**
 *puts2 - it just prints the alphabet
 *@str : eaofhezui
 *Description : /
 *Return: no return
 */

void puts2(char *str)
{
	int i = 0;
	int count = 0;

	while (str[i] != str[-1])
	{
		count++;
		i++;
	}
	for (i = 0; i < count; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}