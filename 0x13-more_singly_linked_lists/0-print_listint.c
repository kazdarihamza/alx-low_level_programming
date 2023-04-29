#include "lists.h"

/**
*print_listint - prints all the elements of a listint_t list.
*@h: list
*Return: number of elements printed
*/

size_t print_listint(const listint_t *h)
{
	const listint_t *placement = h;
	size_t count = 0;

	while (placement != NULL)
	{
		printf("%d\n", placement->n);
		count++;
		placement = placement->next;
	}

	return (count);
}
