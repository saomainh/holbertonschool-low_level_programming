#include "main.h"
#include "stddef.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 *_strspn - finds the lenght of a string
 *@s : eafear
 *@accept : fezfz
 *Description : /
 *Return: count
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int i;
	bool test = false;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				test = true;
			}
		}
		if (!test)
		{
			break;
			return (count);
		}
		s++;
		count++;
		test = false;
	}
	return (count);
}
