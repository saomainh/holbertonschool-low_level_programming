#include "main.h"
#include "stddef.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 *_strpbrk - finds the lenght of a string
 *@s : eafear
 *@accept : fezfz
 *Description : /
 *Return: count
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
