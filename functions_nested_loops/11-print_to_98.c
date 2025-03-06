#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Short description, single line
 * @n: fzenfez
 * Description: this is a description
 * Return: Description of the returned value
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
