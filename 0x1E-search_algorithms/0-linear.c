#include "search_algos.h"
/**
 * linear_search - search for a value using linear search algorithim
 * @array: pointer to the array to search
 * @size: size of the array
 * @value: the value to search
 * Return: 1 -1 if array is NULL || value not found, else return index of value
 *
 * Description: prints a value every time it is compared in the array
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (value == array[i])
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return (i);
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		}
	}
	return (-1);
}
