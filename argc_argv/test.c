#include "stddef.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    if (!isdigit('7'))
	{
		printf("n'est pas un digit\n");
	}
	else
	{
		printf("est un digit\n");
	}
    return (0);
}