#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node in a dlistint_t
 *                            list at a given position.
 * @h: Pointer to the head of the dlistint_t list.
 * @idx: Index of new node
 * @n: Integer to contain new node
 *
 * Return: Address of the new node
 *         else - NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *next_node = *h, *node_new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		next_node = next_node->next;
		if (next_node == NULL)
			return (NULL);
	}

	if (next_node->next == NULL)
		return (add_dnodeint_end(h, n));

	node_new = malloc(sizeof(dlistint_t));
	if (node_new == NULL)
		return (NULL);

	node_new->n = n;
	node_new->prev = next_node;
	node_new->next = next_node->next;
	next_node->node_new->prev = node_new;
	next_node->next = node_new;

	return (node_new);
}
