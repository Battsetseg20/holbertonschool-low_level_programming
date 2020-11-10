#include "holberton.h"
/**
 * _abs - calculates absolute number of an integer
 * @n: random integer
 *
 *Return: n
 */

int _abs(int n)
{
	if (n < 0)
		return (n * (-1));
	else
		return (n);
}
