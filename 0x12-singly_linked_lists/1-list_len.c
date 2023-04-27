#include "lists.h"

/**
* list_len - returns the number of elements in a linked list
*@h: list
*Return: Number of elements
*/

size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != 0; i++)
	{
		h = h->next;
	}
	return (i);
}

