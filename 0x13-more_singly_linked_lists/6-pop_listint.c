#include "lists.h"

/**
*pop_listint - deletes the head node of a list
*@head: pointer to the first node
*Return: head node's data or 0 if null
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
 
	if (head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	return (temp->n);			
}
