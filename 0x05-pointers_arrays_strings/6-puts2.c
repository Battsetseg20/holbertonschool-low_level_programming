#include "holberton.h"

/**
 *_strlen - counts character of a string
 *
 *@s: string pointer variable
 *
 *Return: length of a string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 *puts2 - prints half of the string
 *
 *@str: string pointer variable
 *
 *Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
