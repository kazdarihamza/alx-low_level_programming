#include "lists.h"

/**
*add_nodeint - adds a new node at the beginnig of of a list
*@head: pointer to first node
*@n: value
*Return: address of new element or NULL if failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
