#include "main.h"
/**
  *get_bit - a function that gives the value of a bit in a given index
  *@n: the number
  *@index: the index
  *Return: int
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit = 1UL << index;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	return (n & bit ? 1 : 0);
}
