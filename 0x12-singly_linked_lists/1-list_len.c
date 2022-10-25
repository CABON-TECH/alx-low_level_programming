#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns length of linked list
 * @h: head pointer
 * Return: size of linked list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
