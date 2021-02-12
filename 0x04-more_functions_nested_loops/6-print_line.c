#include "holberton.h"

/**
 *print_line - prints n number of line
 *@n: random n
 * Return: n
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar(95);
		i++;
	}

	_putchar('\n');
}
