#include "holberton.h"
/**
 * print_alphabet - print letters
 * Return: 0;
 */

void print_alphabet(void)
{
	int l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
