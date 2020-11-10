#include <stdio.h>
/**
 * main - prints the sum of the even-valued terms
 * of Fibonacci sequence whose value < 4000000
 *
 * Return: 0
 */


int main(void)
{
	int nm2 = 0;
	int nm1 = 1;
	int sum;
	int n;

	while (nm2 <= 4000000)
	{
		n = nm2 + nm1;
		nm2 = nm1;
		nm1 = n;

		if (n % 2 == 0 && nm2 <= 4000000)
		{
			sum += n;
		}
	}
	printf("%d\n", sum);
	return (0);
}
