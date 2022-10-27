#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * Description: if not possible to add new node at index idx, do
 * not add the new node, return NULL
 *
 * @head: ptr to 1st elem in a list
 * @idx: the index where the new node should be added
 * @n: the data to be added
 *
 * Return: address of new node, NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head, *new_node;
	unsigned int node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = temp;
		*head = new_node;
		return (new_node);
	}

	for (node = 0; node < (idx - 1); node++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}

	new_node->next = new_node->next;
	temp->next = new_node;

	return (new_node);
}
