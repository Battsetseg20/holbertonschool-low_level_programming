#include "holberton.h"

/**
*print_sign - prints sign of a number
* @n: random number
*Return: 0 , 1 or -1
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);   /* 43 = '+' */
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);    /* 45 = '-' */
		return (-1);
	}
	else
	{
		_putchar(48);     /* 48  = '0' */
		return (0);
	}
}
