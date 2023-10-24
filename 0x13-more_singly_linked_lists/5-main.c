#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0 when correct.
 */
int main(void)
{
    listint_t *head;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 2012);
    add_nodeint_end(&head, 2749);
    add_nodeint_end(&head, 2894);
    print_listint(head);
    free_listint2(&head);
    printf("%p\n", (void *)head);
    return (0);
}
