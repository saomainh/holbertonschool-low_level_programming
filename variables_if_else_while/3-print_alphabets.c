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
char alphabet_lowercase = 97;
char alphabet_uppercase = 65;
char space = '\n';
for (alphabet_lowercase = 97; alphabet_lowercase <= 122; alphabet_lowercase++)
putchar(alphabet_lowercase);
for (alphabet_uppercase = 65; alphabet_uppercase <= 90; alphabet_uppercase++)
putchar(alphabet_uppercase);
putchar(space);
return (0);
}