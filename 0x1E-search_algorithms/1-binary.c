#include "search_algos.h"
/**
 * binary_search -search function using binary search algorithim
 * @array: the array to search the value
 * @size: size of the array
 * @value: the value to search
 * Return: -1 if array is NULL || value not found, index of the value otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size - 1;
	size_t m;
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	while (l <= r)
	{
		m = (l + r) / 2;
		printf("Searching in array: ");
		for (i = l; i < r; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);
		if (array[m] == value)
		{
			return (m);
		}
		else if (array[m] < value)
		{
			l = m + 1;
		}
		else
		{
			r = m - 1;
		}
	}
	return (-1);
}
