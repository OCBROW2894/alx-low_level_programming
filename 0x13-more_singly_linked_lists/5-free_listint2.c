#include "lists.h"

/**
 * free_listint2 - free's the list
 * @head: a double pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *list;

	while (*head != NULL)
	{
		list = *head;
		*head = (*head)->next;
		free(list);
	}
}
