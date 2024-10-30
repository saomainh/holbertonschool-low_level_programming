#include "main.h"

/**
 *_strlen - it just prints the alphabet
 *@s : eaofhezui
 *Description : /
 *Return: no return
 */

int _strlen(char *s)
{
	int i = 0;
	int count = 0;

	while (s[i] != s[-1])
	{
		count++;
		i++;
	}

	return (count);
}

