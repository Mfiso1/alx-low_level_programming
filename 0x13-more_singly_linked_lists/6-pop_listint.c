#include "lists.h"

/**
 * pop_listint - Deletes head node of list.
 * @head: Pointer to the address of the
 *        head list.
 *
 * Return: If the linked list is empty - 0
 *         else head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
