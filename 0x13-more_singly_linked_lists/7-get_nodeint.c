#include "lists.h"

/**
*get_nodeint_at_index - returns the nth node of a list
*@head: pointer to the first node
*@index: the position of the node
*Return: the nth node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	for (i = 0; i < index; i++)
		temp = temp->next;

	if (temp == NULL)
		return (NULL);

	return (temp);
}
