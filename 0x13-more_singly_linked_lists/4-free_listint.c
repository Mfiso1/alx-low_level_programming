#include "lists.h"

/**
 * free_listint - Frees list.
 * @head: Pointer to the head to list freed.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
