#include "main.h"
/**
 * _isupper - function that determines upper or lower case
 * @c: the character to determine wheter it's upper or lower case
 * Return: 1 for uppercase and 0 for lowercase
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
