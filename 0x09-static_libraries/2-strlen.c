#include "holberton.h"

/**
 *_strlen - prints the length of a string
 *@s: string variable
 *Return: void
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		i++;
	return (i);
}
