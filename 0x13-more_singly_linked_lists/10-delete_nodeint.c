#include "lists.h"

size_t listint_len(const listint_t *h);

/**
*delete_nodeint_at_index - deletes a node at given position
*@index: position
*@head: pointer to the first node
*Return: 1 if success -1 otherwise
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *deleted_node = NULL;
	listint_t *previous_node = NULL;
	unsigned int i = 0, list_len = listint_len(*head);

	if ((index > list_len) || (list_len == 0))
		return (-1);

	while (head != NULL)
	{
		if (i == index)
		{
			deleted_node = *head;
			if (i == 0)
			{
				*head = deleted_node->next;
				free(deleted_node);
				return (1);
			}
			previous_node->next = deleted_node->next;
			free(deleted_node);
			return (1);
		}
		else if ((i + 1) == index)
			previous_node = *head;
		head = &((*head)->next);
		i++;
	}
	return (-1);
}

/**
 * listint_len - counts the number of nodes in a linked list
 * @h: head of the list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
