#include "main.h"
/**
 * _isdigit - function that determines if c is digit or not
 * @c: the character to determine wheter it's a digit or not
 * Return: 1 for digit and 0 for something else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}

