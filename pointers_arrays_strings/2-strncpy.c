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
 *_strncpy -
 *@dest :
 *@src :
 *@n :
 *Description : /
 *Return: no return
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	/*int og_len = _len(dest);*/
	
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
