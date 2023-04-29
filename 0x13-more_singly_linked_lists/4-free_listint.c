#include "lists.h"

/**
*free_listint - frees a list
*@head: pointer to first node
*/

void free_listint(listint_t *head)
{
	listint_t *placement;

	while (head != NULL)
	{
		placement = head;
		head = head->next;
		free(placement);
	}
}
