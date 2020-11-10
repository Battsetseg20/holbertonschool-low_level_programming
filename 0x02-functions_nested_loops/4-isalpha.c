#include "holberton.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: random letter
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
