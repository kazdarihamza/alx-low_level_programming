#include "lists.h"

/**
*free_listint2 - frees a list
*@head: pointer to the first node
*/

void free_listint2(listint_t **head)
{
	listint_t *placement;
	listint_t **temp = head;

	if (temp != NULL)
	{
		while (head != NULL)
		{
			placement = *head;
			free(placement);
			*head = (*head)->next;
		}
	*temp = NULL;
}
