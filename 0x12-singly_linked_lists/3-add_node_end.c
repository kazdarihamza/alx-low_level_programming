#include "lists.h"

/**
*add_node_end - add a node at the end of list
*@head: pointer to the start
*@str: str to copy
*Return: returns the last node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end;
	char *newstr;
	list_t *last = *head;

	end = malloc(sizeof(list_t));

	if (end == 0)
		return (NULL);

	newstr = strdup(str);
	if (newstr == 0)
	{
		free(end);
		return (NULL);
	}

	end->str = newstr;
	end->len = strlen(newstr);
	end->next = NULL;

	if (*head == 0)
	{
		*head = end;
		return (end);
	}

	while (last->next != NULL)
		last = last->next;
	last->next = end;

	return (end);
}


