#include "holberton.h"

/**
 *_strncat - concats at most n bytes from src to dest
 *
 *@dest: string to append by src
 *@src: string to append to dest
 *@n: number of bytes that would be concat from src to dest
 *
 *Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n && src[j])
	{
		dest[i] = src[j];
		dest[n + i] = '\0';

		i++;
		j++;
	}
	return (dest);
}
