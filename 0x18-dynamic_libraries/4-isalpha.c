#include "main.h"
/**
 *_isalpha - function that checks for lowercase and uppercase alphabets.
 *@c: is the character from ascii
 *Return: always 0 (success)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
