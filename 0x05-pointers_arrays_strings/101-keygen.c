#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - generates random password for 101-crackme program
 *
 *101-crackme password is compared with the sum of the values equal to 0xad4
 *use objdump to locate the value
 *0xad4 equal to 2772 in decimal
 *sum of the ASCII values from 32 to 127 are chosen to generate password
 *
 *Return: success
 */

int main(void)
{
	int n, p;

	srand(time(NULL));

	for (n = 2772; n >= 127; n -= p)
	{
		p = (rand() % 94 + 33);

		printf("%c", p);
	}
	printf("%c", p);
	return (0);
}
