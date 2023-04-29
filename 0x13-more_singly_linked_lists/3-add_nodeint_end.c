#include "lists.h"

/**
*add_nodeint_end - adds a new node at the end of of a list
*@head: pointer to first node
*@n: value
*Return: address of new element or NULL if failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last = *head;

	new = malloc(sizeof(listint_t));

	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
	}
	else
		return (NULL);

	if (*head == 0)
	{
		*head = new;
		return (new);
	}

	while (last->next != NULL)
		last = last->next;
	last->next = new;

	return (new);
}
