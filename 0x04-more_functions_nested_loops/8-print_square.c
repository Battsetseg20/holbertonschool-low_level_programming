#include "holberton.h"

/**
 * print_square - prints a square
 *
 *@size: size of the sq
 * Return: void
 */

void print_square(int size)

{
	int r, c;

	for (r = 0; r < size; r++)
	{
		for (c = 0; c < size; c++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}

		if (size <= 0)
			_putchar('\n');
}
