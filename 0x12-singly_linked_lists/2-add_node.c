#include "lists.h"

/**
*print_list - adds a new noe at the beginnigng of a list
*@head: pointer to beginning of a list
*@str: value of the node to add
@Return: the address of the new element
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *newstr;

	new = malloc(sizeof(list_t));
	if (new == 0)
		return (0);
	newstr = strdup(str);
	if (!newstr)
	{
		free(new);
		return (0);
	}

	new->str = newstr;
	new->len = strlen(str);
	new->next = *head; 

	*head = new;

	return (new);
}
