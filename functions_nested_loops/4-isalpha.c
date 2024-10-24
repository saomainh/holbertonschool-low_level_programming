#include "main.h"

/**
 *_isalpha - it just prints the alphabet x10
 *@c: letter to test
 *Description : /
 *Return: no return
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
