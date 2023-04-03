#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: the string to be filled
 * @b: the constant byte
 * @n: number of bytes to be filled
 * Return: the string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		i++;
		s[i] = b;
	}
	return (s);
}
