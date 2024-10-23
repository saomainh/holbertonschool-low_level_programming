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
int n = 0;
for (n = 0; n <= 8; n++){
putchar(48 + n);
putchar(',');
}
putchar(48 + 9);
putchar('\n');
return (0);
}
