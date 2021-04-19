#include "search_algos.h"
/**
 * linear_search - Searches for a value in an array of integers
 * Using the Linear search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: first indec where value is located
 * If value is not present or array is NULL, return -1
 **/

int linear_search(int *array, size_t size, int value)
{
	size_t i;


	if (!array || size == 0)
		return (-1);

	for (i = 0; i <= size - 1; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	/* value is not present */
	return (-1);
}
