#include "holberton.h"

/**
 *_strcat - appends src to the the dest
 *
 *@dest: string to append by the src
 *@src: string to append to the dest
 *
 *Return: pointer to the resulting string dest
 */


	char *_strcat(char *dest, char *src)
	{
		int i, j;

		i = j = 0;

		while (dest[i] != '\0')
			i++;

		while ((dest[i] = src[j]))
		{ i++;
			j++;
		}
		return (dest);
	}
