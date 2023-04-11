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
 *str_concat - concatenates two strings
 *@s1: first str
 *@s2: second str
 *Return: the full str
 */
char *str_concat(char *s1, char *s2)
{
	int size, n, j, m;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size = _strlen(s1) + _strlen(s2) + 1;
	s3 = malloc(size * sizeof(char));

	n = 0;
	j = _strlen(s1);
	m = 0;
	while (n < _strlen(s1))
	{
		s3[n] = s1[n];
		n++;
	}
	while (j < size && m < _strlen(s2))
	{
		s3[j] = s2[m];
		j++;
		m++;
	}
	s3[j] = '\0';
	return (s3);
}
