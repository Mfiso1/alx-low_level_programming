#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @head: Pointer to a pointer to the head of the dlistint_t list
 * @n: The integer value to store in the new node
 *
 * Return: Address of the new node
 *         else - Null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	node_new = malloc(sizeof(dlistint_t));
	if (node_new == NULL)
		return (NULL);

	node_new->n = n;
	node_new->prev = NULL;
	node_new->next = *head;
	if (*head != NULL)
		(*head)->prev = node_new;
	*head = node_new;

	return (new);
}
