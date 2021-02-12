#include "holberton.h"
#include <stdlib.h>

/**
 *str_concat - concatenates two strings
 *@s1: preceding string
 *@s2: following string
 *
 *Return: pointer to newly allocated space in memory, NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, l1, l2, size;
	char *a;

	if (s1 == NULL)        /* if Null passed, treat as empty string*/
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (l1 = 0; s1[l1];)   /* string length for s1 and s2*/
	{
		l1++;
	}
	for (l2 = 0; s2[l2];)
	{
		l2++;
	}
	size = l1 + l2;         /* size of dynamically allocated array*/
	a = malloc((size * sizeof(char)) + 1); /* create array a size + '\0'*/
	if (a == NULL)          /* return NULL on failure*/
	{
		return (NULL);
	}
	for (i = 0; i < l1; i++)  /* fill with the first string*/
	{
		a[i] = s1[i];
	}
	for (j = 0; j < l2; j++)  /* fill with the second string*/
	{
		a[i + j] = s2[j];
	}
	return (a);
}
