#include "main.h"
#include "stddef.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strcpy - it just prints the alphabet
 *@dest : eaofhezui
 *@src : efezfez
 *Description : /
 *Return: no return
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return dest;
}
