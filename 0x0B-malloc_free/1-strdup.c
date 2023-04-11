#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *
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
 *
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
