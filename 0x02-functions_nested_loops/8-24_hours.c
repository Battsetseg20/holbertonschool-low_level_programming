#include "holberton.h"

/**
 * jack_bauer - prints every minute in every hour
 * in 00:00 format
 * Return: void
 */

void jack_bauer(void)
{
	int hour;
	int minute;

	hour = 0;
	while (hour < 24)
	{
		minute = 0;
		while (minute <= 59)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
			minute++;
		}
		hour++;
	}
}
