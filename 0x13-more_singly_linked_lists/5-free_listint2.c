#include "lists.h"

/**
 * free_listint2 - frees a list and sets the head to NULL
 *
 * @head: ptr to a ptr to the 1st elem in a list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	head = NULL;
}
