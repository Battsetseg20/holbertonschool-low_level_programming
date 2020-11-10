#include "holberton.h"
/**
 *_isupper - checks for uppercase character
 *@c : random character to test
 * Return: 1 uppercase, 0 lowercacse, c other character
 **/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	else
		return (0);
}
