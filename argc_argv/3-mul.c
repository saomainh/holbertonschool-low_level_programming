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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
