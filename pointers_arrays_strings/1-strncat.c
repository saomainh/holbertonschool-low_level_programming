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
 *_strncat - it just prints the alphabet
 *@dest : eaofhezui
 *@src : efezfez
 *@n : efaiohea
 *Description : /
 *Return: no return
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int og_len = _len(dest);
	
	for (i = 0; i < n; i++)
	{
		if (*src == '\0')
		{
			break;
		}
		dest[i+og_len] = *src;
		src++;
	}

	return (dest);
}
