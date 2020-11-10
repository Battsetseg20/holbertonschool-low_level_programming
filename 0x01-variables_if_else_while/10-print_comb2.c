#include <stdio.h>
/**
 * main - displays numbers in two digits from 00 to 99
 *in ascending order using putchar
 * Return: 0 (success)
 */
int main(void)
{
	int d1;
	int d2;

	d1 = '0';

	while (d1 <= '9')
	{
		d2 = '0';
		while (d2 <= '9')
		{
			if (d1 > '0' || d2 > '0')
			{
				putchar(',');
				putchar(' ');
			}
			putchar(d1);
			putchar(d2++);
		}
		d1++;
	}
	putchar('\n');
	return (0);
}
