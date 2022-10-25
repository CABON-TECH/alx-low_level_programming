#include "lists.h"
#include <string.h>
/**
 * add_node - function to add node at front
 * @head: pointer to first node
 * @str: string to initialize the str member of the struct
 * Return: NULL on fail, else address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
