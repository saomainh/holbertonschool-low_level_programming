#include "stddef.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
*main - finds the lenght of a string
*@argc : eafear
*@argv : jkbkjk
*Description : /
*Return: count
*/

int main(int argc, char* argv[])
{
	int result = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
