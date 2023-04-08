#include "main.h"
/**
 * _strlen - returns the lentgh of a string
 * @s: the string we want to know its lentgh
 * Return: it returns the lentgh of the string
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
