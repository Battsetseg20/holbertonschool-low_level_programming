#include "holberton.h"

/**
 *leet - encodes string into 1337
 *
 *@s : string to encode
 *
 *Return: encoded string
 */

char *leet(char *s)
{

	int i, j;

	char a[] = "aeotlAEOTL";
	char b[] = "4307143071";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; a[j]; j++)
		{
			if (s[i] == a[j])
				s[i] = b[j];
		}
	}
	return (s);
}
