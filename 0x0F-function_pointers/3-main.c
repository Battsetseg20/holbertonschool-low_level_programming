#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *main - program to perform simple operations
 *@argc: number of arguments
 *@argv: array of arguments
 *Return: 0 if success, 98, 99, 100 on error
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*f)(int, int);

	if (argc != 4)   /* if n of argument is wrong*/
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(argv[2]); /* get operator function */
	if (f == NULL)           /* if the operator doesnt belong */
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");   /* if b = 0 */
		exit(100);
	}
	num1 = atoi(argv[1]); /* convert arguments to int */
	num2 = atoi(argv[3]);
	result = f(num1, num2);
	printf("%d\n", result);

	return (0);
}
