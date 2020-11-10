#include "holberton.h"

/**
 *cap_string - capitalizes every word
 *@s: string to capilize
 *Return: capitalzed words
 */


char *cap_string(char *s)
{
	int i = 0;


	if (s[0] >= 97 && s[0] <= 122)
		s[0] = s[0] - 32;

	for (i = 1; s[i]; i++)
	{
		if (
			s[i - 1] == ' ' ||
			s[i - 1] == '\t' ||
			s[i - 1] == '\n' ||
			s[i - 1] == ',' ||
			s[i - 1] == ';' ||
			s[i - 1] == '.' ||
			s[i - 1] == '!' ||
			s[i - 1] == '?' ||
			s[i - 1] == '"' ||
			s[i - 1] == '(' ||
			s[i - 1] == ')' ||
			s[i - 1] == '{' ||
			s[i - 1] == '}'
			)

		{

			if (s[i] >= 97 && s[i] <= 122)
				s[i] = s[i] - 32;
		}
	}
		return (s);
	}
