#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_realloc - reallocates memory size
 * @ptr: pointer to address to old memory
 * @old_size: unsigned int type
 * @new_size: unsigned int type
 * Return: return pointer to array
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;

	if (new_size > old_size || ptr == NULL)
	{
		s = malloc(new_size);
		free(ptr);
		return (s);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
