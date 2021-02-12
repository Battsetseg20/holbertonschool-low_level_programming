#include "holberton.h"

/**
 * _islower - checks for lowercase character
 * @c: is a character
 * Return: 0 or 1
 */


int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}
