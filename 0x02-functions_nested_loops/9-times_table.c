#include "holberton.h"

/**
 * times_table - prints 9x time table starting with 0
 *
 * Return: void
 */

void times_table(void)
{

	int x;
	int y;

	for (x = 0; x <= 9; x++)    /* row */
	{
		for (y = 0; y <= 9; y++)  /* column */
		{       /* add space for 1 digit except the first column */
			if (x * y <= 9 && y != 0)
				_putchar(' ');

			if (x * y > 9)    /* for 2 digits */
			{
				_putchar(x * y / 10 + '0');
				_putchar(x * y % 10 + '0');
			}

			if (x * y <= 9)    /* for 1 digit */
			{
				_putchar(x * y + '0');
			}
			if (y == 9)        /* newline for last column */
				_putchar('\n');
			else               /* or followed by , and whitespace */
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
