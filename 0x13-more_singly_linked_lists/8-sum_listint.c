#include "lists.h"

/**
 * sum_listint - returns sum of all the data of a linked list
 *
 * @head: ptr to the ifrst elem in a linked list
 *
 * Return: sum of the data in the list
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;

	int sum = 0;

	if (head == NULL)
		return (0);

	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
