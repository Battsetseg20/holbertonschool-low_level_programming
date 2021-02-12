#include "holberton.h"

/**
 * _strlen - finds the length of a string
 *
 *@s: string to count
 *Return: i
 */


int _strlen(char *s)
{
	int i, c = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		c++;
	}
	return (i);
}

/**
 * print_rev - prints a string in reverse
 *
 *@s: string to print
 */

void print_rev(char *s)
{

	int i, c;

	c = _strlen(s);

		for (i = (c - 1); i >= 0; i--)
		{
			_putchar(*(s + i));
		}
	_putchar('\n');
}
