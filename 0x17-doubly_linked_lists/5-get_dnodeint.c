#include "lists.h"

/**
 * get_dnodeint_at_index- returns the nth node of a dlistint_t linked list.
 * @head: pointer to the head of the list
 * @index: the index of the node, starting from 0
 *
 * Return: NULL if it doesnt exist, the node if it does.
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	current = head;
	i = 0;
	while (current != NULL)
	{
		if (i == index)
			return (current);
		current = current->next;
		i++;
	}
	return (NULL);
}
