#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: the memory area to copy to
 * @src: the memory area to copy from
 * @n: number of bytes to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}
	return (dest);
}
