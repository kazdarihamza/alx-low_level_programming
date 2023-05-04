#include "main.h"
/**
  *clear_bit - a function that sets 0 in a given index
  *@n: a pointer to a umber
  *@index: the index
  *Return: 1 for success or -1 when fail
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}
