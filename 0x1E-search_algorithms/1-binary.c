#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * Using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: index where value is located
 * If value is not found or if array is NULL, return -1
 **/

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid, i;

	if (!array || size == 0)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = left + ((right - left) / 2);
		/* if value is at mid */
		if (value == array[mid])
			return (mid);
		/* ignore the right half */
		if (value < array[mid])
			right = mid - 1;
		/* ignore the left half */
		else
			left = mid + 1;
	}
	/* value is not present */
	return (-1);
}
