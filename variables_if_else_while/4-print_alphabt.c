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
char ch = 97;
char space = '\n';
for (ch = 97; ch <= 122; ch++)
if (ch != 101 && ch != 113)
putchar(ch);
putchar(space);
return (0);
}
