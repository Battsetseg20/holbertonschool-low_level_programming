#include "holberton.h"

/**
 *factorial - prints factorial of number n
 *@n: integer to test
 *
 *Return: 1 if n = 1, -1 if error, factorial of n if else
 */

int factorial(int n)
{
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
