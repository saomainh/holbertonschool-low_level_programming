#include <stdio.h>

/**
 * main - Short description, single line
 * Description: Longer description of the function)?
(* section header: Section description)*
 * Return: Description of the returned value
 */

int main(void)
{
	printf("Size of a char: %ld byte(s)\nSize of an int: %ld byte(s)\nSize of a long int: %ld byte(s)\nSize of a long long int: %ld byte(s)\nSize of a float: %ld byte(s)\n", sizeof(char), sizeof(int), sizeof(long int), sizeof(long long int), sizeof(float));
	return (0);
}
