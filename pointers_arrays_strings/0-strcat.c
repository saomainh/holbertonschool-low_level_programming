#include "main.h"
#include "stddef.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strcat - it just prints the alphabet
 *@dest : eaofhezui
 *@src : efezfez
 *Description : /
 *Return: no return
 */

int _len(char *str)
{
	int i = 0;
	int count = 0;
	
	while (str[i] != str[-1])
	{
		count++;
		i++;
	}

	return (count);
}

char *_strcat(char *dest, char *src)
{
	int i;

	for (i = _len(src) - 1; i < _len(src) - 1 + _len(dest); i++)
	{
		dest[i] = *src;
		src++;
	}

	return (dest);
}
