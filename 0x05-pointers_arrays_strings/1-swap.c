#include "holberton.h"

/**
 *swap_int - swaps the values of two integers
 *@a: int a
 *@b : int b
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
