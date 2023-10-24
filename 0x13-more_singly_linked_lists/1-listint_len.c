#include "lists.h"

/**
 * listint_len - length of the list
 * @h: struct to traverse
 * Return: amount of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
