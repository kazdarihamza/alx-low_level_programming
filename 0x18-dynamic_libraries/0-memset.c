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
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
