#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: A pointer to the head of the dlistint_t list
 * @n: Integer to contain the new node
 *
 * Return: Address of the new node
 *         else - NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node_new, *last;

	node_new = malloc(sizeof(dlistint_t));
	if (node_new == NULL)
		return (NULL);

	node_new->n = n;
	node_new->next = NULL;

	if (*head == NULL)
	{
		node_new->prev = NULL;
		*head = node_new;
		return (node_new);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;
	last->next = node_new;
	node_new->prev = last;

	return (node_new);
}
