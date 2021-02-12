#include "holberton.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all arguements to the program
 * @ac: argument count
 * @av: pointer to arguements
 * Return: pointer to new string or NULL
 **/
char *argstostr(int ac, char **av)
{
	int i, j, k, size;
	char *p;

	k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++) /*length of string of an av*/
			size++;
		size++;
	}

	p = malloc((sizeof(char) * size) + 1); /*allocate*/

	if (p == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++) /* fill the array w/ argv */
		{
			p[k] = av[i][j];
			k++;
		}
		p[k] = '\n';
		k++;
	}
	return (p);
}
