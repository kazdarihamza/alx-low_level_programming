#include "lists.h"

/**
*reverse_listint - reverses a list
*@head: pointer to the first node
*Return: a pointer to head
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *next;

	if (head == NULL || *head == NULL)
		return (NULL);

	previous = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}
	(*head) = previous;

	return (*head);
}
