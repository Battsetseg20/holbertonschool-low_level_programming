#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_all - prints any argument of the function
 *@format: list of types of arguments passed to the function
 *
 *Return: void
 */

void print_all(const char * const format, ...)
{
	int  i;
	char *sval, *sep;
	va_list args;

	va_start(args, format);
	i = 0;
	while (format != NULL && format[i])
	{
		sep = "";
		if (format[i + 1])
		{
			sep = ", ";
		}
		switch (format[i])
		{
		case 'i':
			printf("%i%s", va_arg(args, int), sep);
			break;
		case 'c':
			printf("%c%s", va_arg(args, int), sep);
			break;
		case 'f':
			printf("%f%s", va_arg(args, double), sep);
			break;
		case 's':
			sval = va_arg(args, char *);
			if (sval == NULL || sval[0] == '\0')
			{
				sval = "(nil)";
			}
			printf("%s%s", sval, sep);
			break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
