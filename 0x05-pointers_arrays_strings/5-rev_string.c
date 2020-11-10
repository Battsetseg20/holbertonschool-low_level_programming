#include "holberton.h"

/**
*_strlen -  counts characters of a string
*
*@s: string to count
*
*Return: i
*/

int _strlen(char *s)
{
	int i, c = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		c++;
	}
	return (i);
}

/**
 *rev_string - reverses string
 *
 *@s: string to reverse
 *
 *Return: void
 */

void rev_string(char *s)
{
	int i, s0;
	char h, n;

	s0 = _strlen(s) - 1;
	i = 0;

	while (i < s0)
	{
		h = s[i];
		n = s[s0];
		s[i++] = n;
		s[s0--] = h;
	}
}
