#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_numbers - prints numbers followed by a new line
 *@separator: pointer to separator
 *@n: number of passed arguments
 *
 *Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nlist;
	unsigned int i;
	int prints;

	va_start(nlist, n);
	for (i = 0; i < n; i++)
	{
		prints = va_arg(nlist, int);
		printf("%d", prints);
		if (separator && i < (n - 1))
			printf("%s", separator);
	}
	va_end(nlist);
	printf("\n");
}
