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
int i; 
for(i = 0; i < 17 ; i++){
putchar((i/10)+'0');
putchar((i%10)+'0');
printf("\n");
}
return (0);
}
