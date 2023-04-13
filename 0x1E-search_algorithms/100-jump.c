#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted array
 * @array: a pointer to the first element of the array to the search
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: if the value is not present or the array is NULL, -1
 *         otherwise , the first index where the value is located
 *
 * Description: prints a value everytime it is compared in the array.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
