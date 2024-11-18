#include "main.h"
#include "stddef.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_puts_recursion - finds the lenght of a string
 *@s : eafear
 *Description : /
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
int _strlen_recursion(char *s)
{
	int count = 0;
	
	return (_strlen(count, s));
}
