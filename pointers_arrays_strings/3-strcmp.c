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
 *_strcmp -
 *@s1 :
 *@s2 :
 *Description : /
 *Return: no return
 */

int _strcmp(char *s1, char *s2)
{
	int s1_add = 0;
	int s2_add = 0;
	int difference;
	
	while (*s1 != '\0')
    {
		s1_add = s1_add + *s1;
		s1++;
	}
	while (*s2 != '\0')
    {
		s2_add = s2_add + *s1;
		s2++;
	}
	difference = s1_add - s2_add;

	return (difference);
}
