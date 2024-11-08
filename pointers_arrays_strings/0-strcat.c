#include "main.h"
#include "stddef.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_len - finds the lenght of a string
 *@str : eafear
 *Description : /
 *Return: count
 */

int _len(char *str)
{
	int count = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}

	return (count);
}

/**
 *_strcat - it just prints the alphabet
 *@dest : eaofhezui
 *@src : efezfez
 *Description : /
 *Return: no return
 */

char *_strcat(char *dest, char *src)
{
	int i;

	for (i = _len(dest) - 1; i < _len(src) - 1 + _len(dest); i++)
	{
		dest[i + 1] = *src;
		src++;
	}

	return (dest);
}
