#include "lists.h"

/**
*free_list - frees a list
*@head: pointer to the first node
*Return: void
*/

void free_list(list_t *head)
{
	list_t *tmp;
	int i;

	for (i = 0; head != NULL; i++)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}

