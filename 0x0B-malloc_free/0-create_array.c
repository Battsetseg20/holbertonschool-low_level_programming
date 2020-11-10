#include "holberton.h"
#include <stdlib.h>

/**
 *create_array - creates array of chars and initializes is w/ a char
 *@size: size of the array
 *@c: char to fill the elements of the dynamically allocated array
 *
 *Return: returns a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;                /*comparison between size and i in loop*/
	char *a;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(char)); /* create an array "a" of size "size"*/
	for (i = 0; i < size; i++)
	{
		if (a == NULL)
			return (NULL);
		a[i] = c;               /* fill each element with char c */
	}
		return (a);
}
