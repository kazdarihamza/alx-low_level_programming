#include "lists.h"

/**
*print_listint - prints all the elements of a listint_t list.
*@h: list
*Return: number of elements printed
*/

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	printf("%d\n", h->n);
	count++;
	return (count);
}
