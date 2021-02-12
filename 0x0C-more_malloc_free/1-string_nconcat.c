#include "holberton.h"
#include <stdlib.h>

/**
 *string_nconcat - concatenates two strings
 *@s1: preceding string
 *@s2: following string
 *@n: n number of s2
 *
 *Return: pointer to newly allocated space filled with s1 and s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1, l2, l2len, size, i, j;
	char *a;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
/* calculate the length of the strings*/
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	if (l2 <= n)
		l2len = l2;
	else
		l2len = n;
/*allocated space in a memory */
	size = l1 + l2len;
	a = malloc((size * sizeof(char)) + 1);
/* return NULL when allocation fails */
	if (a == NULL)
	{
		return (NULL);
	}
/* fill the elements of a */
	for (i = 0; i < l1; i++)
		a[i] = s1[i];
	for (j = 0; j < l2len; j++)
		a[i + j] = s2[j];
	a[i + j] = '\0';
	return (a);
}
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
