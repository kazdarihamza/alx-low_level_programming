#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strlen - prints the length of a char
 *@s: str to measure
 *Return: returns the length of the str
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 *_strdup - returns a pointer to a newly allocated space in memory
 *which contains a copy of the string given as a parameter
 *@str: string to copy
 *Return: a pointer to the new str
 */
char *_strdup(char *str)
{
	char *nstr;
	int size, n;

	if (str == NULL)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	nstr = malloc(size * sizeof(char));
	n = 0;

	while (n < size)
	{
		if (nstr == NULL)
			return (NULL);

		nstr[n] = str[n];
		n++;
	}
	return (nstr);
}
