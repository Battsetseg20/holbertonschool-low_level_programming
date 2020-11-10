#include "holberton.h"

/**
 *print_diagonal - prints diagonal line
 *@n: random n
 * Return: n
 */

void print_diagonal(int n)
{
	int x, y;

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
	}

	if (n <= 0)
		_putchar('\n');
}
