#include <stdio.h>


/**
 *main - prints al possible different combinations of two digits
 *Return: 0 (success)
 */

int main(void)
{
	int d1;
	int d2;

	d1 = 48;
	while (d1 <= 56)
	{
		d2 = d1 + 1;
		while (d2 <= 57)
		{
			putchar(d1);
			putchar(d2);
			d2++;
			if (d1 < 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
		d1++;
	}
	putchar('\n');
	return (0);
}
