#include "holberton.h"

/**
 **string_toupper - chages string letters to uppercase
 *
 *@s: string to change
 *
 *Return: pointer to the changed string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] += (65 - 97);
	}

	return (s);
}
