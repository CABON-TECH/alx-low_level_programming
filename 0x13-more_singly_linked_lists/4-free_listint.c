#include "lists.h"

/**
 * free_listint - fn that frees a listint_t list
 *
 * @head: ptr to the 1st elem in the list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp_ptr;

	while (head != NULL)
	{
		temp_ptr = head->next;

		free(head);
		head = temp_ptr;
	}
}
