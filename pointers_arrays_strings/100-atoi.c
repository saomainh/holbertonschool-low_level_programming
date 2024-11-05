#include "main.h"
#include "stddef.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 *_strcpy - it just prints the alphabet
 *@dest : eaofhezui
 *@src : efezfez
 *Description : /
 *Return: no return
 */

int _pow(int base, int power)
{
    int result = 1;

    while (power != 0)
    {
        result *= base;
		power--;
    }

    return result;
}

bool int_check(char *str)
{
	if(*str >= 48 && *str <= 57)
    {
		return true;
	}
	return false;
}

int int_ass(char *s, int sign)
{
    int power = 0;
    int result = 0;

    while (int_check(s))
    {
        power++;
        s++;
    }

    while (power != 0)
    {
        result += (*(s - power) - 48) * _pow(10, power - 1);
		power--;
    }

    if (sign < 0)
    {
        return result * -1;
    }
    return result;
}	

int _atoi(char *s)
{
	int sign = 0;
	
	while (*s != '\0')
	{
		if (*s == '+')
		{
			sign++;
		}
		else if (*s == '-')
		{
			sign--;
		}
		if(int_check(s))
		{
			return int_ass(s, sign);
		}	
		s++;
	}
	return 0;
}
