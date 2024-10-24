#include "main.h"

/**
 *print_alphabet_x10 - it just prints the alphabet x10
 *
 *Description : /
 *Return: no return
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;
	for (i = 0; i < 10; i++)
		{
			for (ch = 97; ch <= 122; ch++)
				{
					_putchar(ch);
				}
			_putchar('\n');
		}
}
