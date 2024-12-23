#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

void *malloc_checked(unsigned int b)
{
    int* allocated;

    allocated = malloc(b);
    if (allocated == NULL)
    {
        exit(98);
    }
    return(allocated);
}