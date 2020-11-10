#include "holberton.h"
#include <stdlib.h>

/**
 *_calloc - allocates memory for an array
 *@nmemb: n of elements
 *@size: size of each element
 *
 *Return: pointer to the allocated memeory, or NULL on error
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *b;

/* If nmemb or size is 0, then _calloc returns NULL*/
	if (nmemb == 0 || size == 0)
		return (NULL);
/* memory allocation */
	b = malloc(nmemb * size);
/* If malloc fails */
	if (b == NULL)
		return (NULL);
/* fill the elements of b */
	for (i = 0; i < (nmemb * size); i++)
		b[i] = 0;
	return (b);
}
