#include "holberton.h"
#include <stdlib.h>

/**
 *_strdup - duplicates a string to new array
 *@str: string to duplicate
 *
 *Return: pointer to a new string which is a duplicate of a string
 * NULL is else
 */

char *_strdup(char *str)
{
	int l, j, size;
	char *a;

	if (str == NULL)
	{
		return (NULL);
	}
	for (l = 0; str[l];)      /* size of the string to copy */
		l++;
	size = l + 1;             /* size of the array to create*/
	a = malloc(size * sizeof(char));  /* allocate memory for array a */
	if (a == NULL)    /* if d.alloc fails */
	{
		return (NULL);
	}
	j = 0;             /* fill new array with elements of string*/
	while (j < size)
	{
		a[j] = str[j];
		j++;
	}
	return (a);
}
