#include "lists.h"

/**
 * add_nodeint_end - fn that adds a new node to end of a list
 *
 * @head: a ptr to a ptr to the 1st elem of a list
 * @n: the data to be added
 *
 * Return:address of new elem, NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *ptr;

	ptr = *head;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr->next = new_node;
	}

	return (*head);
}
