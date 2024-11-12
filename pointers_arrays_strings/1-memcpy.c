#include "main.h"
#include "stddef.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_memcpy - finds the lenght of a string
 *@dest : eafear
 *@src : fezfz
 *@n : ezfze
 *Description : /
 *Return: count
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
