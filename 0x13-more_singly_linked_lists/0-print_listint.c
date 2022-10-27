#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all elements of a listint_t list
 *
 * @h: ptr to 1st elemnt in the list(head)
 *
 * Return: elements in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}

	return (nodes);
}

