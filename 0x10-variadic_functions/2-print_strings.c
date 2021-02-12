#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - prints numbers followed by newline
 *@separator: pointer to string separator
 *@n: number of strings passed to the function
 *
 *Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str_list;
	unsigned int i;
	char *str;

	va_start(str_list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(str_list, char *);
		if (str == NULL)
			str = "(nil)"; /* printf("nil") prints nil(null) */
		printf("%s", str);
		if (separator && i < (n - 1))
			printf("%s", separator);
	}
	va_end(str_list);
	printf("\n");
}
