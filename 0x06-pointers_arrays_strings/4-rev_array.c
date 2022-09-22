#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of integers
 * @n: number of elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, temp, end;

	end = n - 1;
	for (i = 0; i < end; i++, end--)
	{
		temp = a[end];
		a[end] = a[i];
		a[i] = temp;
	}
}
