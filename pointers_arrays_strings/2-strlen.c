#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen - Short description, single line
 * @s: aerfae
 * Description: this is a description
 * Return: Description of the returned value
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}

	return (count);
}
