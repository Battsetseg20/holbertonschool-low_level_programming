#include <stdio.h>
/**
 *main - shows first 50 fibonacci seq
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long nm2 = 1, nm1 = 2, nn;

	printf("%ld, %ld", nm2, nm1);

	for (i = 3; i <= 50; i++)
	{
		nn = nm2 + nm1;
		printf(", %ld", nn);
		nm2 = nm1;
		nm1 = nn;
	}

	printf("\n");
	return (0);
}
