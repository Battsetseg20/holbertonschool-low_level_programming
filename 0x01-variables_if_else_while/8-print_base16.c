#include <stdio.h>

/**
 * main - display all the numbers of base 16 in lowercase
 *i.e. hexadecimal system : 0123456789abcdef
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char hexan, hexal;

	hexan = '0';
	hexal = 'a';
	while (hexan <= '9')
	{
		putchar(hexan++);
	}
	while (hexal <= 'f')
	{
		putchar(hexal++);
	}
	putchar('\n');
	return (0);
}
