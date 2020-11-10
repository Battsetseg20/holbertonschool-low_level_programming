#include "holberton.h"

/**
 * more_numbers - prints 0-14, 10x
 *
 * Return: void
 */

void more_numbers(void)
{
	int row, n;

	for (row = 0; row <= 9; row++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		_putchar('\n');
	}
}
