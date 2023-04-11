#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
		for (m = 0; av[n][m] != '\0'; m++)
			size++;
		size++;
	}
	size++;

	str = malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (n = 0; n < ac; n++)
	{
		for (m = 0; av[n][m] != '\0'; m++)
		{
			str[l] = av[n][m];
			l++;
		}
		str[l] = '\n';
		l++;
	}
	str[l] = '\0';
	return (str);
}

