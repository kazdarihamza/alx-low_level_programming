#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to the head of the list
 * @idx: the index of the list where the new node
 * should be added. Index starts at 0.
 * @n: node's data.
 *
 * Return: the address of the new node, or NULL if it failed.
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current;
	unsigned int count = 0;

if (!h || !new_node)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	current = *h;

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	while (current)
	{
		if (!current->next && count == idx - 1)
		{
			new_node = add_dnodeint_end(h, n);
			return (new_node);
		}
		else if ((idx - 1) == count)
		{
			new_node->next = current->next;
			new_node->prev = current;
			current->next->prev = new_node;
			current->next = new_node;
			return (new_node);
		}
		count++;
		current = current->next;
	}
	free(new_node);
	return (NULL);
}
