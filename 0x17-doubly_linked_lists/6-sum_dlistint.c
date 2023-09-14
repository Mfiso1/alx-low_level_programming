#include "lists.h"

/**
 * sum_dlistint - Sums data of a dlistint_t list
 * @head: head of the dlistint_t list
 *
 * Return: The sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
