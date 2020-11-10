#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main -  calls srand to generate random numbers
* and if else to evaluate the statement
*Return: 0 (success)
*/


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2; /*generates random number n*/
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}
