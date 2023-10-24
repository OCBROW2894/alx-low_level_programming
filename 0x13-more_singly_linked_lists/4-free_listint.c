#include "lists.h"

/**
 * free_listint - a function that frees the list
 * @head: pointer to head
 * Return: not specified but its a void
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while ((node = head) != NULL)
	{
		head = head->next;
		free(node);
	}
}
