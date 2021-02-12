#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers till 98
 * @n : beginning number
 * Return: void
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%i, ", n);
		if (n < 98)
		{
			n++;
		}
		else
		{
			n--;
		}
	}
	printf("98\n");
}
