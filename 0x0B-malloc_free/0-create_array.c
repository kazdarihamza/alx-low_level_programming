#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *create_array - creates an array of chars, and initializes
 *with a specific char
 *@size: size of array
 *@c: char that initialzes the array
 *Return: NULL if size is 0, a pointer to array otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int n;

	if (size == 0)
	{
		return (NULL);
	}

	str = malloc((size) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	n = 0;
	while (n < size)
	{
		str[n] = c;
		n++;
	}
	str[n] = '\0';
	return (str);
}
