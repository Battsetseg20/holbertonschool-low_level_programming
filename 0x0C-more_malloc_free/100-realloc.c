#include "holberton.h"
#include <stdlib.h>

/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr: pointer to the memory previously allocated
 *@old_size: size of the allocated space for ptr
 *@new_size: size of the new memory block
 *
 *Return: pointer to the newly allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;
	unsigned int i;
	char *pptr = ptr;

	if (new_size == old_size) /* don't do anything and return ptr */
		return (ptr);
	if (ptr == NULL)
	{
		a = malloc(new_size);
		return (a);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	a = malloc(new_size);       /* allocate new size */
	if (a == NULL)              /* if allocation fails*/
		return (NULL);
	if (new_size > old_size)    /* if new > old, leave new memory */
	{
		for (i = 0; i < old_size; i++)
		{
			a[i] = pptr[i];
		}
		free(ptr);
		return (a);
	}
	else
	{
		for (i = 0; i < new_size; i++)
		{
			a[i] = pptr[i]; /* cast ptr to (char) or new pointer */
		}
		free(ptr);
		return (a);
	}
}
