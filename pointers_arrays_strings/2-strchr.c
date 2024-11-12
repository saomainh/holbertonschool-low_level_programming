#include "main.h"
#include "stddef.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strchr - finds the lenght of a string
 *@s : eafear
 *@c : fezfz
 *Description : /
 *Return: count
 */

char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (*s == '\0')
		{
			break;
			return (NULL);
		}
		s++;
	}
	return (s);
}
