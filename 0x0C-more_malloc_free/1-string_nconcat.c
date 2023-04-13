#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strlen - calculates length of string
 *@s: string to calculate
 *Return: string length
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * string_nconcat - concatenates two strings.
 *@s1: first string
 *@s2: second string
 *@n: integer
 *Return: returns a new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len, i, j;
	char *str;

	len = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (len < 0)
		return (NULL);

	if (len >= _strlen(s2))
		len = _strlen(s2);

	str = malloc(sizeof(*str) * (_strlen(s1) + len + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < _strlen(s1); i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < len; j++)
	{
		str[i + j] = s2[j];
	}
	str[i + j] = '\0';
	return (str);
}
