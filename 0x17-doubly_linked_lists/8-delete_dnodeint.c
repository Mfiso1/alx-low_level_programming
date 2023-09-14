#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *                            at a given index
 * @head: pointer to the head of the dlistint_t
 * @index: The index of the node to delete
 *
 * Return: 1 on sucess
 *         else - -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *next-node = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (next_node == NULL)
			return (-1);
		next_node = next_node->next;
	}

	if (next_node == *head)
	{
		*head = next-node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		next_node->prev->next = next-node->next;
		if (next-node->next != NULL)
			next-node->next->prev = next_node->prev;
	}

	free(next_node);
	return (1);
}
