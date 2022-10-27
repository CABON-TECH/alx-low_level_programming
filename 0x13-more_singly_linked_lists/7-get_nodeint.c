#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 *
 * @head: ptr to the 1st elem in the list
 * @index: the index to be returned
 *
 * Return: nth node , NULL if node doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int nth_node = 0;

	temp = head;

	while (index != nth_node)
	{
		if (temp == NULL)
			return (NULL);

		temp = temp->next;
		nth_node++;
	}

	if (temp == NULL)
		return (NULL);

	return (temp);
}
