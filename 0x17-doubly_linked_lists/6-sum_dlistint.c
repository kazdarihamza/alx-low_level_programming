#include "lists.h"

/**
 * get_dnodeint_at_index- returns the nth node of a dlistint_t linked list.
 * @head: pointer to the head of the list
 * @index: the index of the node, starting from 0
 *
 * Return: NULL if it doesnt exist, the node if it does.
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *i;

	for (i = head; i != NULL; i = i->next)
	{
		sum += i->n;
	}
	return (sum);
}
