#include "lists.h"

/**
*free_listint2 - frees a list
*@head: pointer to the first node
*/

void free_listint2(listint_t **head)
{
	listint_t *placement;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		placement = *head;
		*head = (*head)->next;
		free(placement);
	}
}
