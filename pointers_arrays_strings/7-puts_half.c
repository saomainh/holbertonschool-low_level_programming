#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *puts_half- pzefez
 *@str: ezfez
 *Description: zergezr
 *Return: zerehr
 */

void puts_half(char *str)
{
	int count = 0;
	char *start = str;

	while (*str != '\0')
	{
		str++;
		count++;
	}
	if (count % 2 != 0)
	{
		char *mid = start + ((count - 1) / 2) + 1;

		while (*mid != '\0')
		{
			_putchar(*mid);
			mid++;
		}
		_putchar('\n');
	}
	else if (count % 2 == 0)
	{
		char *new_mid = start + ((count - 1) / 2) + 1;

		while (*new_mid != '\0')
		{
			_putchar(*new_mid);
			new_mid++;
		}
		_putchar('\n');
	}
}
