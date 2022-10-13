#include "function_pointers.h"
/**
 * int_index - searches for an integer in an array
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the comparing function
 * Return: index of the first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x, tmp;

	if (size > 0 && array && cmp)
	{
		for (x = 0; x < size; x++)
		{
			tmp = cmp(array[x]);
			if (tmp)
				break;
		}
		if (x < size)
			return (x);
	}
	return (-1);
}
