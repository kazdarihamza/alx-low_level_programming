#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: the pointer to the start of memory block to be filled
 * @b: the constant byte to write to each byte of memory
 * @n: number of bytes to be filled
 * Return: the string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n - 1)
	{
		i++;
		s[i] = b;
	}
	return (s);
}
