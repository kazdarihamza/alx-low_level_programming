#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - returns the length of a string.
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
		len++, s++;

	return (len);
}

/**
 * argstostr - concatonates all the args of the programs
 *@ac: arg count
 *@av: arg values
 *Return: the concatonated args
 */
char *argstostr(int ac, char **av)
{
	int size, n, m, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (n = 0; n < ac; n++)
	{
		size += _strlen(av[n]);
	}
	size += (ac + 1);

	str = malloc(size * sizeof(char));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (n = 0; n < ac; n++)
	{
		for (m = 0; m < _strlen(av[n]); m++)
		{
			str[l++] = av[n][m];
		}
		str[l++] = '\n';
	}
	return (str);
}
