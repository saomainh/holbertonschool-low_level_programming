#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - print random number and if positive or negative
 *
 *Description : /
 *Return: 0 if it worked
 */
int main(void)
{
	char number = 48;
	char ch = 97;

	for (number = 48; number <= 57; number++)
		putchar(number);
	for (ch = 97; ch <= 102; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
