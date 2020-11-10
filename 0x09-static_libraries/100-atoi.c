#include <stdio.h>

/**
 *_atoi - converts string to an integer
 *
 *@s: string to convert
 *
 *Return: integer
 */

int _atoi(char *s)
{
	int i, res, neg;

	i = res = 0;
	neg = 1;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == '-')
			neg = -neg;

		if ((s[i] >= '0') && (s[i] <= '9'))
			res = res * 10 + neg * (s[i] - '0');

		else if (res != 0)
			break;
	}
		return (res);
}
