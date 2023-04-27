#include "lists.h"

/**
* list_len - returns the number of elements in a linked list
*@h: list
*Return: Number of elements
*/

size_t list_len(const list_t *h)
{
	int i;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}

