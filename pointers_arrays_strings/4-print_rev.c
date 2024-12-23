#include "main.h"
#include "stddef.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_rev - it just prints the alphabet
 *@s : eaofhezui
 *Description : /
 *Return: no return
 */

void print_rev(char *s)
{
	char *end = s;
	char *start = s;
	char temp;

	while (*end != '\0')
	{
		end++;
	}
	end--;
	while(start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
	free(start);
	free(end);
	printf("%s", s);	
	_putchar('\n');
	return;

}
