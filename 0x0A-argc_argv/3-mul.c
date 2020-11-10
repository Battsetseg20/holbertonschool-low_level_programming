#include <stdio.h>
#include <stdlib.h>

/**
 *main - multiplies two numbers
 *@argc: number of arguments passed to the function
 *@argv: array of arguments
 *
 *Return: 1 if error, 0 if success
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int mul;

		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}

	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
