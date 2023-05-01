#include "lists.h"

/**
*get_nodeint_at_index - returns the nth node of a list
*@head: pointer to the first node
*@index: the position of the node
*Return: the nth node
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);	
}
