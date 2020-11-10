#include "holberton.h"

/**
 * reverse_array - reverse a string
 *
 *@a : string to reverse
 *@n : length of the string a
 *
 *Return: string, reversed
 *
 */

void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0; i < n; i++, n--)
	{
		c = a[i];
		a[i] = a[n - 1];
		a[n - 1] = c;
	}
}
