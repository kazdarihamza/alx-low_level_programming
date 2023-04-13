#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - function to allocates memory
 * @nmemb: unsigned int type
 * @size: unsigned int type
 * Return: return pointer to array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int n;

	if (nmemb == 0 || size == 0)
		return (NULL);
	str = malloc(nmemb * size);
	if (str == NULL)
		return (NULL);
	for (n = 0; n < size * nmemb; n++)
		str[n] = 0;
	return (str);
}
