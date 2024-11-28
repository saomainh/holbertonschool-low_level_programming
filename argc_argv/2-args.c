#include "stddef.h"
#include <stdio.h>
#include <stdlib.h>

/**
*main - finds the lenght of a string
*@argc : eafear
*@argv : jkbkjk
*Description : /
*Return: count
*/

int main(int argc, char* argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
