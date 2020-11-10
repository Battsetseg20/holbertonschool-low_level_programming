#include "holberton.h"

/**
 *print_alphabet_x10 - print alphabet from a to z 10 times
 *
 *Return: void
 *
 */

void print_alphabet_x10(void)
{
	int row;
	int l;

/* ex: row(0) : abc...xyz\n row(1) : abc ...xyz\n  etc */
	for (row = 0; row <= 9; row++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
