#include "holberton.h"

/**
 *print_times_table - prints n times table, starting with 0
 *@n: n number
 *If n is greater than 15 or less than 0 the function should not print anything
 *
 *Return: void
 */

void print_times_table(int n)
{
	int x, y;

	if (n <= 15 && n >= 0)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				if (y == 0)
					_putchar(y + '0');
				else if (x * y <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(x * y + '0');
				}
				else if (x * y <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((x * y) / 10 + '0');
					_putchar((x * y) % 10 + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((x * y) / 100 + '0');
					_putchar(((x * y) / 10) % 10 + '0');
					_putchar((x * y) % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
