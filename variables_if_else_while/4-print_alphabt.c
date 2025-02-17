#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Short description, single line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */

int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		if (i != 4 && i != 16)
	    {
			putchar('a' + i);
		}
	}
	putchar('\n');
	return (0);
}
