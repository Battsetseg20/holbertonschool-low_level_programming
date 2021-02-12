#include "holberton.h"

/**
 *_strchr - locates occurence of the character
 *
 *@c: character to search
 *@s: string-to check
 *
 *Return: Returns a pointer to the located character, null if else
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		return (s + i);
	}

	if (s[i] == c) /* what happens if c = '\0' */
	return (s + i);

	return (0);
}
