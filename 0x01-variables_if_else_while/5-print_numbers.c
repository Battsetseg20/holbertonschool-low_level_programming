#include <stdio.h>
/**
 *main - prints number from 0-9
 *Return: 0 (success)
 */
int main(void)
{
	int n;

	n = 48;
	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
