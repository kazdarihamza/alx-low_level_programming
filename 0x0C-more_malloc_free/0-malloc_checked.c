#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory.
 *@b: unsigned integer
 *Return: returns the str
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
