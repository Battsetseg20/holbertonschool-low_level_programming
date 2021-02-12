#include <stdio.h>

/**
 * main - prints all possible different combinations of 3 digits numbers
 * using putchar
 * Return: 0 (success)
 */


int main(void)
{
	int d1;
	int d2;
	int d3;

	d1 = 48;
	while (d1 <= 55)
	{
		d2 = d1 + 1;
		while (d2 <= 56)
		{
			d3 = d2 + 1;
			while (d3 <= 57)
			{
				putchar(d1);
				putchar(d2);
				putchar(d3);
				d3++;
				if (d1 < 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
			d2++;
		}
		d1++;
	}
	putchar('\n');
	return (0);
}
