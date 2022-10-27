#include "lists.h"

/**
 * listint_len - fn to get the no of elements in a singly linked list
 *
 * @h: head of a singly linked list
 *
 * Return: no of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t number_of_nodes = 0;

	while (h != NULL)
	{
		number_of_nodes++;
		h = h->next;
	}

	return (number_of_nodes);
}
