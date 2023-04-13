#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: integer
 * @max: integer
 * Return: return pointer to array
 */

int *array_range(int min, int max)
{
	int i;
	int *p;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
