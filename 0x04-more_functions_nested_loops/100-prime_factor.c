#include <stdio.h>

/**
 *main - prints the largest prime factor of 612852475143
 *
 *Return: 0
 */

int main(void)
{
	int i = 2;
	long n = 612852475143;

	while (n > 1)
	{
		if (n % i == 0)
			n = n / i;
		else
			i = i + 1;
	}
	printf("%d\n", i);
	return (0);
}
