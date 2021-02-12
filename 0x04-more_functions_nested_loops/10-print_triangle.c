#include "holberton.h"

/**
 *print_triangle - prints triangle
 *
*@size: size of a triangle
 *
 * Return: void
 */

void print_triangle(int size)
{

	int x, y;

	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			if (y <= (size - x))
				_putchar(' ');
			else
				_putchar(35);
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
