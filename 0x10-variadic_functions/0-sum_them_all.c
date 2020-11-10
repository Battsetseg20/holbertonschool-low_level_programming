#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters passed
 *
 *Return: sum of all passed parameters
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list args;
	unsigned int i;
	int res_sum;

	if (n == 0)
		return (0);
	va_start(args, n); /* initialize args to store all values after n*/
	res_sum = 0;
	for (i = 0; i < n; i++) /* access all arguments assigned to args */
	{
		res_sum += va_arg(args, int);
	}
	va_end(args); /* clean memory reserved for args) */

	return (res_sum);
}
