#include "lists.h"

/**
*listint_len - prints the number of all the elements of a listint_t list.
*@h: list
*Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
	const listint_t *placement = h;
	size_t count = 0;

	while (placement != NULL)
	{
		count++;
		placement = placement->next;
	}

	return (count);
}
