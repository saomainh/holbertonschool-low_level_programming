#include "main.h"
#include "stddef.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 *_strstr - finds the lenght of a string
 *@haystack : eafear
 *@needle : fezfz
 *Description : /
 *Return: count
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j  = 0; needle[j] != '\0'; j++)
		{
			if (haystack[j + i] != needle[j])
			{
				break;
			}
			if (needle[j + 1] == '\0')
			{
				return (haystack + i);
			}
		}
	}

	return (NULL);
}
