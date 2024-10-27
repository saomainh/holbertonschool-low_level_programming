#include "main.h"

/**
 *jack_bauer - bsolute value of a number
 *
 *Description : /
 *Return: absolute value of n
 */

void jack_bauer(void)
{
	int heures;
	int minutes;

	for (heures = 0; heures <= 24; heures++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			_putchar(heures / 10 + '0');
			_putchar(heures % 10 + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(minutes % 10 + '0');
			_putchar('\n');
		}
	}
}
