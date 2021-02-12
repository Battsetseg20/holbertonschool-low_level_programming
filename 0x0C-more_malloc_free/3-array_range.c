#include "holberton.h"
#include <stdlib.h>

/**
 *array_range - creates an array of integers
 *@min: lowest number
 *@max: highest number
 *
 *Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *a, size, i;

/* min > max, return NULL */
	if (min > max)
		return (NULL);
/* allocated space for array a */
	size = max - min + 1;
	a = malloc(size * sizeof(int));
/* if malloc fails */
	if (a == NULL)
		return (NULL);
/* fill with the values from min to max */
	for (i = 0; i < size; i++)
		a[i] = min++;
	return (a);
}
