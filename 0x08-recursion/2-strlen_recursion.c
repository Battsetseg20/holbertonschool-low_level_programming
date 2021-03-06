#include "holberton.h"

/**
 *_strlen_recursion -  prints length of a string
 *@s: string to check
 *
 *Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);       /* 0 if we reach the end of s*/
	else
		return (1 + _strlen_recursion(++s)); /* recursion till '\0' */
}
