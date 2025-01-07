#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *my_array(int min, int max)
{
    int *array;
    int i;

    array = malloc(max * sizeof(int));
    if (array == NULL)
    {
        return (NULL);
    }

    return (array);
}

void main()
{
    int *a;

    a = my_array(3, 8);

    printf("( %ls )\n", a);

}