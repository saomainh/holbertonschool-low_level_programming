#include "main.h"
#include "stddef.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strlen - finds the lenght of a string
 *@count : eafear
 *@s : dzdrer
 * Description : /
 *Return: count
 */

int _strlen(int count, char *s)
{
	if (*s == '\0')
	{
		return (count);
	}
	count++;
	return (_strlen(count, s + 1));
}

/**
 *_strlen_recursion - finds the lenght of a string
 *@s : dzdrer
 * Description : /
 *Return: count
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	return (_strlen(count, s));
}
