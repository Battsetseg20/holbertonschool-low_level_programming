#include "holberton.h"

/**
 * print_most_numbers - print n from 0-9, except 2 and 4
 *
 *Return: void
 */

void print_most_numbers(void)
{
	char c;

	for (c = 48; c <= 57; c++)
	{
		if (c == 50 || c == 52)
			c++;
		_putchar(c);
	}
	_putchar('\n');
}
