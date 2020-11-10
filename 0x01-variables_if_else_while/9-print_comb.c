#include <stdio.h>

/**
 *main - prints numbers from 0-9 followed by , and whitespace
 * Return: 0 (success)
 */

int main(void)
{
	int n;

	n = '0';
	while (n <= '9')
	{
		if (n > '0')
		{
			putchar(',');
			putchar(' ');
		}
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
