#include "main.h"
#include "stddef.h"

/**
 *puts2 - it just prints the alphabet
 *@str : eaofhezui
 *Description : /
 *Return: no return
 */

void puts_half(char *str)
{
	int i = 0;
	int count = 0;
	int midlenght;

	while (str[i] != str[-1])
	{
		count++;
		i++;
	}
	if (count % 2 != 0)
	{
		midlenght = (count - 1) / 2;
	}
	else
	{
		midlenght = count / 2;
	}	
	for (i = midlenght; i < count; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
